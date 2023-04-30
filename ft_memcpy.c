/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:51:46 by digallar          #+#    #+#             */
/*   Updated: 2023/03/17 11:37:33 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			iterator;
	unsigned char	*dest_copy;
	unsigned char	*src_copy;

	if (dest == 0 && src == 0)
		return (dest);
	dest_copy = (unsigned char *) dest;
	src_copy = (unsigned char *) src;
	iterator = 0;
	while (iterator < n)
	{
		dest_copy[iterator] = src_copy[iterator];
		iterator++;
	}
	return (dest);
}
