/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoutia <amoutia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:58:15 by amoutia           #+#    #+#             */
/*   Updated: 2026/10/28 14:26:40 by amoutia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
// #include <stdio.h>
// int main() {
// 	// printf("%d\n", ft_isdigit('/'));
// 	// printf("%d\n", ft_isdigit('a'));
// 	// printf("%d\n", ft_isdigit(':'));
// 	// printf("%d\n", ft_isdigit(' '));
// 	// printf("%d\n", ft_isdigit(-1));
// 	// printf("%d\n", ft_isdigit(255));
// 	int i = 0;
// 	while (i < 255) {
// 		printf("%d\n", ft_isdigit(i));
// 		i++;
// 	}
// }