/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher <nireher-@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:18:08 by nireher           #+#    #+#             */
/*   Updated: 2024/01/23 14:28:18 by nireher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
		This function returns a pointer to the last occurrence of 'c' on *s 
 */

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	b;
	size_t			len;

	b = c;
	len = ft_strlen(s);
	if (!*s && *s != b)
		return (NULL);
	if (!*s && *s == b)
		return ((char *)s);
	s += len;
	while (len > 0 && *s != b)
	{
		len--;
		s--;
	}
	if (*s == b)
		return ((char *)s);
	return (0);
}
