/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoutia <amoutia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 18:27:34 by amoutia           #+#    #+#             */
/*   Updated: 2026/10/19 11:37:04 by amoutia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_len(long n)
{
	int	len;

	len = 1;
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		is_neg;
	int		len;

	nb = n;
	is_neg = (nb < 0);
	if (is_neg)
		nb = -nb;
	len = nb_len(nb) + is_neg;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len > is_neg)
	{
		len--;
		str[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (is_neg)
		str[0] = '-';
	return (str);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%s", ft_itoa(123456));
// }
