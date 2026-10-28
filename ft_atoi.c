/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoutia <amoutia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 17:30:06 by amoutia           #+#    #+#             */
/*   Updated: 2026/10/28 14:21:51 by amoutia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return ((result * sign));
}
// #include <stdio.h>
// int main()
// {
// 	const char s[] = "9223372036854775809";
// 	const char s1[] = "-21474836477";
// 	printf("%d\n", ft_atoi(s));
// 	printf("%d\n", atoi(s));
// 	printf("%d\n", ft_atoi(s1));
// 	printf("%d", atoi(s1));
// }
