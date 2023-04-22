/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:47:52 by digallar          #+#    #+#             */
/*   Updated: 2022/12/05 11:05:27 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			dest_size;
	size_t			src_size;
	unsigned int	i;

	dest_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	i = 0;
	if (size == 0 && dest_size == 0)
		return (src_size);
	if (dest_size >= size)
	{
		return (size + src_size);
	}
	while (src[i] != 0 && (i + dest_size) < size - 1)
	{
		dst[dest_size + i] = src[i];
		i++;
	}
	dst[dest_size + i] = 0;
	return (dest_size + src_size);
}
