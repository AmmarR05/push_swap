/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 16:27:46 by amradwan          #+#    #+#             */
/*   Updated: 2026/10/01 16:27:56 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	link_node(t_list **head, t_list *new_node, t_list **ptr)
{
	if (*head == NULL)
	{
		*head = new_node;
		*ptr = new_node;
	}
	else
	{
		(*ptr)->next = new_node;
		*ptr = new_node;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new_node;
	t_list	*ptr;

	if (lst == NULL)
		return (NULL);
	head = NULL;
	while (lst != NULL)
	{
		new_node = malloc(sizeof(t_list));
		if (new_node == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		new_node->next = NULL;
		new_node->content = f(lst->content);
		link_node(&head, new_node, &ptr);
		lst = lst->next;
	}
	return (head);
}
