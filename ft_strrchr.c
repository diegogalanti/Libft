/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:45:33 by digallar          #+#    #+#             */
/*   Updated: 2022/12/05 11:42:09 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	cc;
	char	*s_copy;
	size_t	len;

	cc = (char) c;
	s_copy = (char *) s;
	len = ft_strlen(s);
	while (len > 0)
	{
		if (s_copy[len] == cc)
			return (&s_copy[len]);
		len--;
	}
	if (s_copy[len] == cc)
		return (&s_copy[len]);
	return (0);
}
