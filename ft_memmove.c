/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoutia <amoutia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:59:03 by amoutia           #+#    #+#             */
/*   Updated: 2026/10/17 19:12:13 by amoutia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dsst;
	const unsigned char	*srrc;

	if (!dst && !src)
		return (NULL);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	dsst = (unsigned char *)dst;
	srrc = (const unsigned char *)src;
	while (len > 0)
	{
		len--;
		dsst[len] = srrc[len];
	}
	return (dst);
}
