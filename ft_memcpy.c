/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoutia <amoutia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:58:42 by amoutia           #+#    #+#             */
/*   Updated: 2026/10/17 19:11:57 by amoutia          ###   ########.fr       */
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
