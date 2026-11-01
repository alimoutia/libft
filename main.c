/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoutia <amoutia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 22:39:35 by amoutia           #+#    #+#             */
/*   Updated: 2026/10/31 07:45:01 by amoutia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char s[] = "hello";
	char ss[] = "World!";
	t_list *head = NULL;
	t_list *node = ft_lstnew(s);
	t_list *nice = ft_lstnew(ss);
	t_list *Null_test = ft_lstnew(NULL);
	if (!node)
	{
		printf("%s", "node is Null");
		return 1;
	}
	if (!Null_test)
	{
		printf("%s", "Null_test is Null");
		return 1;	
	}
	if (node == Null_test)
	{
		printf("%s", "the 2 nodes are equal!!!!");
		return 1;
	}
	ft_lstadd_back(&head, node);
	if (head == node)
		printf("%s\n", "SUCCED on 1st test!");
	else
		printf ("%s\n", "FAILURE on 1st test!");
	if (node->next == NULL)
		printf("%s\n", "SUCCED on 2nd test!");
	else
		printf("%s\n", "FAILURE on 2nd test!");
	ft_lstadd_back(&head, nice);
	if (head == nice)
		printf("%s\n", "FAILURE on 3rd test!");
	else
		printf ("%s\n", "SUCCED on 3rd test!");
	if (node->next == nice)
		printf("%s\n", "SUCCED on 4th test!");
	else
		printf ("%s\n", "FAILURE on 4th test!");
	if (nice->next == NULL)
		printf("%s\n", "SUCCED on 5th test!");
	else
		printf("%s\n", "FAILURE on 5th test!");
	ft_lstclear(&head, free);
	return 0;
}