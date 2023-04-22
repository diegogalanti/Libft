/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:08:21 by digallar          #+#    #+#             */
/*   Updated: 2022/11/30 15:42:53 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_lower_case(int c)
{
	if (c >= 0x61 && c <= 0x7A)
		return (1);
	return (0);
}

static int	ft_is_upper_case(int c)
{
	if (c >= 0x41 && c <= 0x5A)
		return (1);
	return (0);
}

int	ft_isalpha(int c)
{
	if (ft_is_upper_case(c) || ft_is_lower_case(c))
		return (1024);
	return (0);
}
