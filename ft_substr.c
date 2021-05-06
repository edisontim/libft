/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:55:41 by tedison           #+#    #+#             */
/*   Updated: 2021/04/03 17:41:06 by tedison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;
	size_t	start_cpy;

	if (!s)
		return (NULL);
	start_cpy = start;
	substr = NULL;
	i = 0;
	if (start < ft_strlen(s))
	{
		while (s[start_cpy++] && i < len)
			i++;
	}
	substr = malloc(sizeof(*substr) * (i + 1));
	if (!substr)
		return (substr);
	i = 0;
	if (start < ft_strlen(s))
		while (s[start] && i < len)
			substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
