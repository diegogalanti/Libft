/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:40:38 by digallar          #+#    #+#             */
/*   Updated: 2022/12/01 10:59:51 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_copy;

	s_copy = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		s_copy[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
