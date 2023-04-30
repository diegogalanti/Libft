/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:16:48 by digallar          #+#    #+#             */
/*   Updated: 2022/12/02 19:12:12 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*current;

	size = 1;
	if (lst == 0)
		return (0);
	current = lst;
	while (current->next != 0)
	{
		current = current->next;
		size++;
	}
	return (size);
}
