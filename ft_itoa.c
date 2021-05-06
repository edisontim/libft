/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 09:35:06 by tedison           #+#    #+#             */
/*   Updated: 2021/04/05 11:42:42 by tedison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_myputnbr(int n, char *arr, int *c)
{
	unsigned int	nbr;

	nbr = n;
	if (n < 0)
	{
		arr[0] = '-';
		*c = *c + 1;
		nbr = -nbr;
	}
	if (nbr < 10)
	{
		arr[*c] = nbr + '0';
		*c = *c + 1;
	}
	else
	{
		ft_myputnbr(nbr / 10, arr, c);
		ft_myputnbr(nbr % 10, arr, c);
	}
}

size_t	count_digits(int n)
{
	size_t			count;
	unsigned int	nbr;	

	count = 0;
	if (n == 0)
		return (1);
	nbr = n;
	if (n < 0)
	{
		count++;
		nbr = -n;
	}
	while (nbr > 0)
	{
		count++;
		nbr /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*to_return;
	int		index;

	index = 0;
	to_return = NULL;
	to_return = malloc(sizeof(*to_return) * (count_digits(n) + 1));
	if (!to_return)
		return (NULL);
	ft_myputnbr(n, to_return, &index);
	to_return[index] = '\0';
	return (to_return);
}
