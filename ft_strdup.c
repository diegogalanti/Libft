/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:28:48 by digallar          #+#    #+#             */
/*   Updated: 2022/12/01 10:58:55 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		size;
	char	*copy;

	size = ft_strlen(str) + 1;
	copy = ft_calloc(size, sizeof(*copy));
	if (copy == 0)
		return (copy);
	copy = ft_memcpy(copy, str, size * sizeof(*copy));
	return (copy);
}
