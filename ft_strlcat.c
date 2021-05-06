/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 08:36:33 by tedison           #+#    #+#             */
/*   Updated: 2021/04/04 10:02:34 by tedison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		src_i;
	size_t	size;
	size_t	size_src;

	size_src = 0;
	src_i = 0;
	size = ft_strlen(dst);
	i = ft_strlen(dst);
	size_src = ft_strlen(src);
	if (dstsize == 0)
		return (size_src);
	if (dstsize < size)
		return (size_src + dstsize);
	while (src[src_i] && (size + src_i) < dstsize)
		dst[i++] = src[src_i++];
	if ((size + src_i) == dstsize && dstsize > size)
		dst[--i] = '\0';
	else
		dst[i] = '\0';
	return (ft_strlen(src) + size);
}
