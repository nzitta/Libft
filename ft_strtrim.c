/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher <nireher-@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:15:04 by nireher           #+#    #+#             */
/*   Updated: 2024/01/23 14:29:48 by nireher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
		this function is not corrected. has to be reviewed
 */

static char	*ft_trimming(char const *set, char const *s1)
{
	unsigned int	sum;

	sum = 0;
	while (*set && *s1)
	{
		if (*set == *s1)
		{
			s1++;
			set -= sum;
			sum = 0;
		}
		else
		{
			set++;
			sum++;
		}
	}
	return ((char *)s1);
}

static void	ft_reverse(char *s1)
{
	size_t	len;
	char	*start;
	char	*end;
	char	temp;

	len = ft_strlen(s1);
	start = s1;
	end = s1 + len - 1;
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*a1;
	char	*a2;
	size_t	count;
	size_t	len;
	char	*trimmed;

	a1 = ft_trimming(set, s1);
	ft_reverse(a1);
	a2 = ft_trimming(set, a1);
	ft_reverse(a2);
	len = ft_strlen(a2);
	trimmed = (char *)malloc(sizeof(char) * (len + 1));
	if (!trimmed)
		return (0);
	count = 0;
	while (*a2 && len > 0)
	{
		*trimmed++ = *a2++;
		count++;
		len--;
	}
	*trimmed = '\0';
	return (trimmed - count);
}
