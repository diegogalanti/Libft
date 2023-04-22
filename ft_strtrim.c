/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:27:10 by digallar          #+#    #+#             */
/*   Updated: 2023/03/20 13:36:38 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_start(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[j] && s1[i])
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

static int	find_end(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	end;

	i = ft_strlen(s1) - 1;
	j = 0;
	end = 0;
	while (set[j] && i >= 0)
	{
		if (s1[i] == set[j])
		{
			end++;
			i--;
			j = 0;
		}
		else
			j++;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		copy_len;
	int		start_trim;
	int		end_trim;
	char	*trimmed;

	start_trim = find_start(s1, set);
	end_trim = find_end(s1, set);
	copy_len = ft_strlen(s1) - start_trim - end_trim;
	if (copy_len <= 0)
	{
		trimmed = malloc(1);
		if (!trimmed)
			return (0);
		trimmed[0] = 0;
	}
	else
	{
		trimmed = malloc(copy_len + 1);
		if (!trimmed)
			return (0);
		ft_memcpy(trimmed, s1 + start_trim, copy_len);
		trimmed[copy_len] = 0;
	}
	return (trimmed);
}
