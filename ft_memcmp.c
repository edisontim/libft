/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:32:09 by tedison           #+#    #+#             */
/*   Updated: 2021/04/05 11:28:35 by tedison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	count;
	unsigned char	s1_char;
	unsigned char	s2_char;

	count = 0;
	s1_char = ((char *)s1)[count];
	s2_char = ((char *)s2)[count];
	if (n == 0)
		return (0);
	while (count < n)
	{
		s1_char = ((char *)s1)[count];
		s2_char = ((char *)s2)[count];
		if (s1_char != s2_char)
			return (s1_char - s2_char);
		if (count++ == n - 1 && s1_char == s2_char)
			return (0);
	}
	return (((unsigned char *)s1)[count] - ((unsigned char *)s2)[count]);
}
