/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher <nireher-@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 04:13:49 by nireher           #+#    #+#             */
/*   Updated: 2024/01/23 14:22:24 by nireher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
		This function joins two mem areas
 */

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total;
	size_t	count;
	char	*joined;

	total = ft_strlen(s1) + ft_strlen(s2);
	joined = (char *)malloc(sizeof(char) * total + 1);
	if (!joined)
		return (NULL);
	count = 0;
	while (*s1)
	{
		*joined++ = *s1++;
		count++;
	}
	while (*s2)
	{
		*joined++ = *s2++;
		count++;
	}
	*joined = '\0';
	return (joined - count);
}
