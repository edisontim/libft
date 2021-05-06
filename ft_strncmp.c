/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 17:27:01 by tedison           #+#    #+#             */
/*   Updated: 2021/04/03 12:14:07 by tedison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;
	unsigned char	s1_char;
	unsigned char	s2_char;

	count = 0;
	s1_char = s1[count];
	s2_char = s2[count];
	if (n == 0)
		return (0);
	while (!(s1[count] == '\0' || s2[count] == '\0') && count < n)
	{
		s1_char = s1[count];
		s2_char = s2[count];
		if (s1_char != s2_char)
			return (s1_char - s2_char);
		if (count++ == n - 1 && s1_char == s2_char)
			return (0);
	}
	if ((s1[count] < 0 || s2[count] < 0))
	{
		s1_char = s1[count];
		s2_char = s2[count];
		return (s1_char - s2_char);
	}
	return (s1[count] - s2[count]);
}
