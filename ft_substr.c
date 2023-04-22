/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:34:21 by digallar          #+#    #+#             */
/*   Updated: 2023/01/17 11:54:02 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	size;
	int				bytes_to_copy;
	char			*substr;

	size = ft_strlen(s);
	if (start > size)
		bytes_to_copy = 0;
	else if (size == 0)
		bytes_to_copy = 0;
	else if ((size - start) < len)
		bytes_to_copy = size - start;
	else
		bytes_to_copy = len;
	substr = malloc((bytes_to_copy + 1) * sizeof(*substr));
	if (substr == 0)
		return (substr);
	substr[bytes_to_copy] = 0;
	if (bytes_to_copy == 0)
		return (substr);
	substr = ft_memcpy(substr, s + start, (bytes_to_copy) * sizeof(*substr));
	substr[bytes_to_copy] = 0;
	return (substr);
}
