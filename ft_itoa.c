/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher- <nireher-@stdent.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:40:33 by nireher-          #+#    #+#             */
/*   Updated: 2023/10/27 20:18:06 by nireher-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_number(int n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n)
	{
		count++;
		n = n/10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*new_string;
	int		i;

	len = count_number(n);
	if (!(new_string = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	new_string[len] = '\0';
	while (n)
	{
		new_string[len - 1] = (n % 10) + '0';
		n = n/10;
		len--;
	}
	return (new_string);
}

