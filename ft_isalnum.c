/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoutia <amoutia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 17:30:41 by amoutia           #+#    #+#             */
/*   Updated: 2026/10/20 12:23:48 by amoutia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	return (0);
}
// #include <stdio.h>

// int main()
// {
// 	// printf("%d\n", ft_isalnum('a'));
// 	// printf("%d\n", ft_isalnum('Z'));
// 	// printf("%d\n", ft_isalnum('1'));
// 	// printf("%d\n", ft_isalnum('9'));
// 	// printf("%d\n", ft_isalnum('/'));
// 	// printf("%d\n", ft_isalnum(':'));
// 	// printf("%d\n", ft_isalnum('@'));
// 	// printf("%d\n", ft_isalnum('['));
// 	// printf("%d\n", ft_isalnum('`'));
// 	// printf("%d\n", ft_isalnum('{'));
// 	// printf("%d\n", ft_isalnum('_'));
// 	// printf("%d\n", ft_isalnum(0));
// 	int i = -1;
// 	while (i < 255) {
// 		printf("%d\n", ft_isalnum(i));
// 		i++;
// 	}
// }
