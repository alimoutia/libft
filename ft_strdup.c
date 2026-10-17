/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoutia <amoutia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:59:32 by amoutia           #+#    #+#             */
/*   Updated: 2026/10/17 19:17:14 by amoutia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*ss1;

	len = ft_strlen(s1);
	ss1 = malloc(len + 1);
	if (!ss1)
		return (NULL);
	ft_memcpy(ss1, s1, len);
	ss1[len] = '\0';
	return (ss1);
}
