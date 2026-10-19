/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoutia <amoutia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:59:13 by amoutia           #+#    #+#             */
/*   Updated: 2026/10/19 13:51:58 by amoutia          ###   ########.fr       */
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
// #include <stdio.h>
// #include <memory.h>

// int main()
// {
// 	char b[] = "Hello";
// 	printf("%p\n", ft_memset(b, -1, 6));
// 	printf("%p", memset(b, -1, 6));
// }
