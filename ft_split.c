/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher- <nireher-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:24:43 by nireher-          #+#    #+#             */
/*   Updated: 2023/10/24 18:57:43 by nireher-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (!s[i])
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

static int	count_len(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

static void	*free_words(char **array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;
	int		index;

	array = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	while (i < count_words(s, c))
	{
		index = 0;
		while (s[j] && s[j] == c)
			j++;
		array[i] = malloc(sizeof(char) * count_len(s, c, j) + 1);
		if (!array)
			return (free_words(array, i));
		while (s[j] && s[j] != c)
			array[i][index++] = s[j++];
		array[i][index] = '\0';
		i++;
	}
	array[i] = NULL;
	return (array);
}
