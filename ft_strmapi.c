/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 10:16:05 by tedison           #+#    #+#             */
/*   Updated: 2021/04/03 18:09:10 by tedison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*to_return;

	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	to_return = malloc(sizeof(*to_return) * (i + 1));
	if (!to_return)
		return (NULL);
	i = 0;
	while (s[i])
	{
		to_return[i] = f(i, s[i]);
		i++;
	}
	to_return[i] = '\0';
	return (to_return);
}
