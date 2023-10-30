/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher- <nireher-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 23:27:41 by nireher-          #+#    #+#             */
/*   Updated: 2023/10/20 18:15:54 by nireher-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const set)
{
	size_t	start;
	size_t	end;
	size_t	total;
	char	*tr;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && strchr(set, s1[start]))
		start++;
	if (start > end)
		return (ft_strdup(""));
	end = ft_strlen(s1);
	while (s1[end] && strchr(set, s1[end - 1]))
		end--;
	total = end - start + 1;
	tr = (char *)malloc((total + 1) * sizeof(char));
	if (!tr)
		return (NULL);
	else
		ft_strlcpy(tr, &s1[start], total);
	return (tr);
}
