/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:24:47 by tedison           #+#    #+#             */
/*   Updated: 2021/04/03 17:45:40 by tedison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

unsigned int	where_to_start(char const *s1, char const *set)
{
	unsigned int	i;

	i = 0;
	while (is_in_set(s1[i], set))
	{	
		i++;
	}
	return (i);
}

size_t	where_to_end(char const *s1, char const *set)
{
	size_t	i;

	i = ft_strlen(s1) - 1;
	while (i > 0 && is_in_set(s1[i], set))
	{
		i--;
	}
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*to_return;
	size_t	len;

	len = 0;
	if (!s1 || !set)
		return (NULL);
	if (where_to_end(s1, set) < where_to_start(s1, set))
	{
		to_return = malloc(sizeof(*to_return) * 1);
		to_return[0] = 0;
		return (to_return);
	}
	len = where_to_end(s1, set) - where_to_start(s1, set);
	to_return = ft_substr(s1, where_to_start(s1, set), len);
	return (to_return);
}
