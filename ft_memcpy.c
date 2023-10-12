/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher- <nireher-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:12:08 by nireher-          #+#    #+#             */
/*   Updated: 2023/10/06 04:18:40 by nireher-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *mdest, const void *msrc, size_t n)
{
	size_t	i;

	if (msrc == NULL && mdest == NULL)
		return (NULL);
	i = 0;
	while (n > i)
	{
		((char *)mdest)[i] = ((const char *)msrc)[i];
		i++;
	}
	return (mdest);
}
