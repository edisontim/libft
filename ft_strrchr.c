/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 17:23:56 by tedison           #+#    #+#             */
/*   Updated: 2021/04/03 12:15:55 by tedison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	char	to_search;
	int		index;
	char	*to_return;

	to_return = NULL;
	index = 0;
	to_search = c;
	while (s[index])
	{
		if (s[index] == to_search)
		{
			to_return = (char *)&s[index];
		}
		index++;
	}
	if (c == '\0')
		to_return = (char *)&s[index];
	return (to_return);
}
