/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 11:37:22 by tedison           #+#    #+#             */
/*   Updated: 2021/04/05 12:37:45 by tedison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*copy;
	t_list	*next;

	if (!lst || !del)
		return ;
	copy = *lst;
	next = *lst;
	while (next)
	{
		copy = next;
		next = next->next;
		del(copy->content);
		free(copy);
	}
	*lst = NULL;
}
