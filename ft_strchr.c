/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher- <nireher-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:28:13 by nireher-          #+#    #+#             */
/*   Updated: 2023/10/09 23:05:16 by nireher-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	d;

	d = c;
	while (*str)
	{
		if (*str == d)
			return ((char *)str);
		str++;
	}
	if (*str == d)
		return ((char *)str);
	return (NULL);
}
