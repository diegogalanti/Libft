/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:45:47 by digallar          #+#    #+#             */
/*   Updated: 2022/12/01 11:06:34 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t	i;
	char	cc;
	char	*b_c;

	i = 0;
	cc = (unsigned char) c;
	b_c = (char *) b;
	while (i < len)
	{	
		if (*b_c == cc)
			return ((void *) b_c);
		b_c++;
		i++;
	}
	return (0);
}
