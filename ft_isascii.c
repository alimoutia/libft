/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoutia <amoutia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:58:07 by amoutia           #+#    #+#             */
/*   Updated: 2026/10/20 12:30:58 by amoutia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
#include <stdio.h>
int main() {
	// printf("%d\n", ft_isascii(0));
	// printf("%d\n", ft_isascii('A'));
	// printf("%d\n", ft_isascii(127));
	// printf("%d\n", ft_isascii(128));
	// printf("%d\n", ft_isascii(255));
	// printf("%d\n", ft_isascii(-1));
	int i = -1;
	while (i < 255) {
		printf("%d\n", ft_isascii(i));
		i++;
	}
}
