/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:34:37 by tedison           #+#    #+#             */
/*   Updated: 2021/04/06 16:30:39 by tedison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	search;

	search = c;
	i = 0;
	while (i < n)
	{
		if ((unsigned char) c == ((unsigned char *)s)[i])
			return (&((unsigned char *)s)[i]);
		i++;
	}
	return (0);
}
