/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:32:04 by nireher-          #+#    #+#             */
/*   Updated: 2023/10/10 00:15:19 by nireher-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*pt;
	int		sz;

	sz = ft_strlen(s);
	pt = (char *)malloc(sizeof(char) * sz + 1);
	if (pt == NULL)
		return (NULL);
	while (*s)
		*pt++ = *s++;
	pt[sz] = '\0';
	return (pt);
}
