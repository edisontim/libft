/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:38:23 by tedison           #+#    #+#             */
/*   Updated: 2021/04/03 17:43:12 by tedison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*to_malloc;

	i = 0;
	to_malloc = malloc(count * size);
	if (!to_malloc)
		return (NULL);
	while (i < count * size)
	{
		((char *)to_malloc)[i] = 0;
		i++;
	}
	return (to_malloc);
}
