/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher <nireher-@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:47:23 by nireher           #+#    #+#             */
/*   Updated: 2024/02/08 14:21:53 by nireher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h

t_list	*ft_lstnew(void *content)
{
	t_list *node;
	// crear la variable
	// darle memoria a la variable
	// meter valores en la variable

	node = (t_list *)malloc(sizeof(t_list));
	if (!(node))
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int	main(void)
// {
// 	t_list	*a;

// 	char c = 'c';
// 	a = ft_lstnew(&c);
	
// 	printf("%c", *(char *)(a->content));
// 	if (a->next == NULL)
// 		printf("U");
// 	//free(a);
// 	system("leaks a.out");
// 	return (0);
// }

