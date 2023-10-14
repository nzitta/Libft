/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher- <nireher-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 23:04:25 by nireher-          #+#    #+#             */
/*   Updated: 2023/10/13 23:09:50 by nireher-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmmove(void *cdest, const void *csrc, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	unsigned const char	*src;

	dest = (unsigned char *)cdest;
	src = (unsigned const char *)csrc;
	if (!n || dest == src)
		return (dest);
	if (dest < src)
		return (ft_memcpy (dest, src, n));
	else
	{
		i = 0;
		while (n--)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
