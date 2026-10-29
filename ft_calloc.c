/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoutia <amoutia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 17:30:35 by amoutia           #+#    #+#             */
/*   Updated: 2026/10/17 17:30:36 by amoutia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	all;
	char	*ptr;

	all = count * size;
	if (size == 0)
	{
		ptr = malloc(1);
		ptr[0] = '\0';
		return (ptr);
	}
	if (count != 0 && all / count != size)
		return (NULL);
	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, all);
	return (ptr);
}
