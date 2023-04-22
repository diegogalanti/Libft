/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:42:21 by digallar          #+#    #+#             */
/*   Updated: 2022/12/05 11:04:47 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	iterator;

	iterator = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[iterator] != '\0' && iterator < dstsize - 1)
	{
		dst[iterator] = src[iterator];
		iterator++;
	}
	if (dstsize > 0)
		dst[iterator] = '\0';
	return (ft_strlen(src));
}
