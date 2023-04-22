/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:45:25 by digallar          #+#    #+#             */
/*   Updated: 2023/03/17 12:16:50 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	cc;
	char	*s_copy;

	cc = (char) c;
	s_copy = (char *) s;
	while (*s_copy != 0)
	{
		if (*s_copy == cc)
			return (s_copy);
		s_copy++;
	}
	if (cc == 0)
		return (s_copy);
	return (0);
}
