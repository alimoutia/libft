/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoutia <amoutia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:59:13 by amoutia           #+#    #+#             */
/*   Updated: 2026/11/01 22:23:57 by amoutia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bb;
	size_t			i;

	i = 0;
	bb = (unsigned char *)b;
	while (i < len)
	{
		bb[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
#include <stdio.h>
int main()
{
	// char *arr = "Hello";
	// int i = 1337;
	// char *p = (char *)&i;
	// ft_memset(p, arr[0], 1);
	// ft_memset(p + 1, arr[1], 1);
	// ft_memset(p + 2, arr[2], 1);
	// ft_memset(p + 3, arr[3], 1);
	// ft_memset(p + 4, arr[4], 1);
	// ft_memset(p + 5, 0, 4);
	// printf("%s", &i);
	// int i = 5115;
	// ft_memset(&i, 128, 4);
	// ft_memset(&i, 0, 3);
	// printf("%d", i);
	int a[5] = {10, 20, 30, 40, 50};
	int *p = a;
	size_t i = 0;
	size_t lstindx = sizeof(a) / sizeof(a[0]);
	ft_memset(p + lstindx - 1, 255, sizeof(int));
	while (i < lstindx)
	{
		printf("%d, ", *p);
		p++;
		i++;
	}
	p = a;
	i = 0;
	ft_memset(p + 2, 255, sizeof(int));
	printf("\n");
	while (i < lstindx)
	{
		printf("%d, ", *p);
		i++;
		p++;
	}
}
