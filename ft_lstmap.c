/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 11:54:28 by tedison           #+#    #+#             */
/*   Updated: 2021/04/05 12:40:24 by tedison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*copy;

	if (!lst || !f)
		return (NULL);
	copy = ft_lstnew(f((*lst).content));
	if (copy == NULL)
		return (NULL);
	lst = lst->next;
	first = copy;
	while (lst)
	{
		copy->next = ft_lstnew(f((*lst).content));
		if (copy->next == NULL)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		copy = copy->next;
		lst = lst->next;
	}
	copy = NULL;
	return (first);
}
