/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:32:04 by nireher-          #+#    #+#             */
/*   Updated: 2023/10/24 18:23:05 by nireher-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		size;
	char	*pt;
	char	*temp;

	size = ft_strlen(s);
	pt = (char *)malloc(sizeof(char) * size + 1);
	temp = pt;
	if (!pt)
		return (NULL);
	while (*s && size > 0)
		*pt++ = *s++;
	*pt = '\0';
	return (temp);
}
