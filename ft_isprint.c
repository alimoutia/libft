/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoutia <amoutia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:58:21 by amoutia           #+#    #+#             */
/*   Updated: 2026/10/20 12:40:32 by amoutia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
// #include <stdio.h>
// int main() {
// 	// printf("%d\n", ft_isprint(31));
// 	// printf("%d\n", ft_isprint(32));
// 	// printf("%d\n", ft_isprint('a'));
// 	// printf("%d\n", ft_isprint('~'));
// 	// printf("%d\n", ft_isprint(127));
// 	// printf("%d\n", ft_isprint(0));
// 	// printf("%d\n", ft_isprint('\n'));
// 	// printf("%d\n", ft_isprint('\t'));
// 	// printf("%d\n", ft_isprint(128));
// 	// printf("%d\n", ft_isprint(-1));
// 	int i = -1;
// 	while (i < 255) {
// 		printf("%d\n", ft_isprint(i));
// 		i++;
// 	}
// }
