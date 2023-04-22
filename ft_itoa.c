/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:34:21 by digallar          #+#    #+#             */
/*   Updated: 2023/03/22 15:15:02 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int copy)
{
	int	lenght;

	lenght = 1;
	while (copy > 9)
	{
		lenght++;
		copy = copy / 10;
	}
	return (lenght);
}

static char	*minimum(void)
{
	char	*result;

	result = malloc(12);
	if (!result)
		return (0);
	result[0] = '-';
	result[1] = '2';
	result[2] = '1';
	result[3] = '4';
	result[4] = '7';
	result[5] = '4';
	result[6] = '8';
	result[7] = '3';
	result[8] = '6';
	result[9] = '4';
	result[10] = '8';
	result[11] = 0;
	return (result);
}

char	*malloc_for_me(int lenght, int is_negative)
{
	char	*result;

	result = malloc((lenght + is_negative + 1) * sizeof(*result));
	if (!result)
		return (0);
	result[lenght + is_negative] = 0;
	return (result);
}

char	*ft_itoa(int n)
{	
	int		is_negative;
	char	*result;
	int		lenght;

	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		n *= -1;
	}
	if (n == -2147483648)
		return (minimum());
	lenght = get_len(n);
	result = malloc_for_me(lenght, is_negative);
	if (!result)
		return (0);
	while ((--lenght + is_negative) >= 0)
	{
		if ((lenght + is_negative) == 0 && is_negative)
			result[0] = '-';
		else
			result[lenght + is_negative] = (n % 10) + 48;
		n /= 10;
	}
	return (result);
}
