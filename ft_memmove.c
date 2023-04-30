/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:19:33 by digallar          #+#    #+#             */
/*   Updated: 2023/03/17 11:37:37 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*inverse_memcpy(void *dest, const void *src, size_t n)
{
	size_t			iterator;
	unsigned char	*dest_copy;
	unsigned char	*src_copy;

	if (dest == 0 && src == 0)
		return (dest);
	dest_copy = (unsigned char *) dest;
	src_copy = (unsigned char *) src;
	iterator = n;
	while (iterator > 0)
	{
		dest_copy[iterator - 1] = src_copy[iterator - 1];
		iterator--;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest >= src)
		return (inverse_memcpy(dest, src, n));
	else
		return (ft_memcpy(dest, src, n));
}
