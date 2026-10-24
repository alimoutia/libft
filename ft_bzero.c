/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoutia <amoutia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 17:30:23 by amoutia           #+#    #+#             */
/*   Updated: 2026/10/22 16:59:09 by amoutia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char s[] = "Hello";
// 	ft_bzero(s, 3);
// 	printf("%d\n", s[0]);
// 	char s1[] = "Hello";
// 	bzero(s1, 3);
// 	printf("%d", s1[0]);
// }
