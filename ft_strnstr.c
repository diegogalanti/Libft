/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:45:58 by digallar          #+#    #+#             */
/*   Updated: 2023/01/17 11:53:55 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	setup(size_t *little_s, size_t *big_s, const char *b, const char *l)
{
	*little_s = ft_strlen(l);
	*big_s = ft_strlen(b);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_size;
	size_t	big_size;
	size_t	big_i;
	size_t	little_i;

	setup(&little_size, &big_size, big, little);
	if (little_size == 0)
		return ((char *) big);
	little_i = 0;
	big_i = -1;
	while (++big_i < len && big_i < big_size)
	{
		if (little[little_i] == big[big_i])
		{
			if (little[little_i + 1] == 0)
				return ((char *) &big[big_i + 1 - little_size]);
			little_i++;
		}
		else if (little_i != 0)
		{
			big_i -= little_i;
			little_i = 0;
		}
	}
	return (0);
}
