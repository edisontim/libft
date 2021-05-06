/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:40:58 by tedison           #+#    #+#             */
/*   Updated: 2021/04/07 18:17:18 by tedison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char const *s, char c, int *p, int *p2)
{
	size_t	i;
	size_t	count;

	*p = 0;
	*p2 = 0;
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
				i++;
			count++;
		}
		if (s[i] != 0)
			i++;
	}
	return (count);
}

int	ft_malloc(char ***tab, int i)
{
	*tab = malloc(i);
	if (*tab == NULL)
	{
		return (0);
	}
	return (1);
}

char	**ft_freetab(char **tab, int j)
{
	int	i;

	i = 0;
	while (j >= 0)
	{
		free(tab[j]);
		j--;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		start;

	if (!s)
		return (NULL);
	if (!(ft_malloc(&tab, sizeof(*tab) * (word_count(s, c, &i, &j) + 1))))
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			tab[j] = ft_substr(s, start, (i - start));
			if (!tab[j++])
				return (ft_freetab(tab, j - 1));
		}
		if (s[i] != 0)
			i++;
	}
	tab[j] = NULL;
	return (tab);
}
