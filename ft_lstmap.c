/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:02:34 by digallar          #+#    #+#             */
/*   Updated: 2023/03/20 12:22:02 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_success(t_list **h, t_list *n_n, void (*d)(void *))
{
	if (n_n == 0)
	{
		ft_lstclear(h, d);
		return (0);
	}
	return (1);
}

static t_list	*lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*current_new;
	t_list	*head;
	void	*new_content;

	new_content = f(lst->content);
	new_node = ft_lstnew(new_content);
	if (new_node == 0)
		return (del(new_content), (void *)0);
	head = new_node;
	lst = lst->next;
	current_new = head;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!check_success(&head, new_node, del))
			return (del(new_content), (void *)0);
		current_new->next = new_node;
		lst = lst->next;
		current_new = current_new->next;
	}
	return (head);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	if (lst && f && del)
		return (lstmap(lst, f, del));
	return (0);
}
