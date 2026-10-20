/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoutia <amoutia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:58:42 by amoutia           #+#    #+#             */
/*   Updated: 2026/10/20 12:00:19 by amoutia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dsst;
	const unsigned char	*srrc;

	if (!dst && !src)
		return (NULL);
	i = 0;
	dsst = (unsigned char *)dst;
	srrc = (const unsigned char *)src;
	while (i < n)
	{
		dsst[i] = srrc[i];
		i++;
	}
	return (dst);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	// char src[] = "12345678";
// 	// printf("%s\n", (char *)ft_memcpy(src + 1, src, 4));
// 	char srrc[] = "12345678";
// 	printf("%s\n", (char *)memcpy(srrc + 1, srrc, 4));
// }
