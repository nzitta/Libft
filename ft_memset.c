/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher- <nireher-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:20:36 by nireher-          #+#    #+#             */
/*   Updated: 2023/10/05 20:21:36 by nireher-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = ptr;
	while (i < n)
	{
		s[i] = x;
		i++;
	}
	return (ptr);
}
