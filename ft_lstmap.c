/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoutia <amoutia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 23:03:06 by amoutia           #+#    #+#             */
/*   Updated: 2026/10/28 14:12:29 by amoutia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*n_node;
	void	*n_content;

	if (!lst || !f)
		return (NULL);
	head = NULL;
	while (lst)
	{
		n_content = f(lst->content);
		n_node = ft_lstnew(n_content);
		if (!n_node)
		{
			if (del)
				del(n_content);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, n_node);
		lst = lst->next;
	}
	return (head);
}
