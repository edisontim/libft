/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:11:25 by tedison           #+#    #+#             */
/*   Updated: 2021/04/03 17:44:29 by tedison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final;
	int		s1_l;
	int		s2_l;
	int		i;
	int		j;

	if (s1 == 0 || s2 == 0)
		return (NULL);
	s1_l = ft_strlen(s1);
	s2_l = ft_strlen(s2);
	i = 0;
	j = 0;
	final = malloc(sizeof(*final) * (s1_l + s2_l + 1));
	if (!final)
		return (NULL);
	while (i < (s1_l + s2_l))
	{
		if (i < s1_l)
			final[i] = s1[i];
		else
			final[i] = s2[j++];
		i++;
	}
	final[i] = '\0';
	return (final);
}
