/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:34:21 by digallar          #+#    #+#             */
/*   Updated: 2022/12/02 17:09:14 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	int		size;
	char	*join;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	size = s1_len + s2_len;
	join = malloc((size + 1) * sizeof(*join));
	if (join == 0)
		return (join);
	ft_memcpy(join, s1, s1_len * sizeof(*join));
	ft_memcpy(join + s1_len, s2, s2_len * sizeof(*join));
	join[size] = 0;
	return (join);
}
