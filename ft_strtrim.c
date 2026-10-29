/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoutia <amoutia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 13:55:09 by amoutia           #+#    #+#             */
/*   Updated: 2026/10/28 16:55:27 by amoutia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	is_c(char c, char const *s2)
{
	size_t	i;

	i = 0;
	while (s2[i])
	{
		if (s2[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *s2)
{
	size_t	start;
	size_t	end;

	if (!s1 || !s2)
		return (NULL);
	start = 0;
	while (s1[start])
	{
		if (is_c(s1[start], s2) == 0)
			break ;
		start++;
	}
	end = ft_strlen(s1);
	while (end > start)
	{
		end--;
		if (is_c(s1[end], s2) == 0)
			break ;
	}
	return (ft_substr(s1, start, end - start + 1));
}
