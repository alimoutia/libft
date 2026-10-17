
#include "libft.h"

static int ft_check(int sign)
{
	if (sign == 1)
		return (-1);
	return (0);
}

int ft_atoi(const char *str)
{
	int i;
	int sign;
	long result;

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
		if (result > (9223372036854775807 - (str[i] - '0')) / 10)
			return (ft_check(sign));
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(result * sign));
}

// #include <stdio.h>

// int main()
// {
// 	const char s[] = "5666466556555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555655656595655922337203685555554775808";
// 	const char s1[] = "+0000000000000000000000000000000000000000000000000000123";
// 	printf("%d\n", ft_atoi(s));
// 	printf("%d", atoi(s));
// }
