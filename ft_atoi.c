/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:46:04 by digallar          #+#    #+#             */
/*   Updated: 2022/12/01 11:08:39 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == 32)
		return (1);
	return (0);
}

static int	ft_get_first_pos(const char *str)
{
	int	iterator;

	iterator = 0;
	while (!ft_isdigit(str[iterator]))
		iterator++;
	return (iterator);
}

static int	is_valid(const char *str)
{
	int	i;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (ft_isdigit(str[i]))
		return (1);
	return (0);
}

static int	is_positive(const char *str)
{
	int	i;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		return (0);
	return (1);
}

int	ft_atoi(const char *nptr)
{
	int		positive;
	int		first_pos;
	long	result;

	result = 0;
	if (is_valid(nptr))
	{
		positive = is_positive(nptr);
		first_pos = ft_get_first_pos(nptr);
		while (ft_isdigit(nptr[first_pos]))
		{
			result = (result * 10) + (nptr[first_pos] - 48);
			first_pos++;
		}
		if (!positive)
			result = result * -1;
	}
	return ((int)result);
}
