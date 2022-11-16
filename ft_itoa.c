/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezkoro <tbezkoro@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:55:14 by tbezkoro          #+#    #+#             */
/*   Updated: 2022/11/01 19:25:45 by tbezkoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	num_size(int num)
{
	unsigned int	len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		len++;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*res;
	unsigned int	len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = num_size(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	res[len] = '\0';
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		len--;
		res[len] = n % 10 + '0';
		n /= 10;
	}
	return (res);
}

// #include<stdio.h>
// int main() 
// {
// 	printf("%s\n", ft_itoa(-2147483648));
// }
/*
012345
"12345\0"
 012345678
"12345678\0"
malloc(number of bytes)
allocate memory for n chars
iz eof one character is sizeof(char)
n * size of one
malloc(size(char) * n)
1555 % 10 = 5
1555 / 10 = 155
1555 / 10 = 155, 5
155 / 10 = 15, 5
15 / 10 = 1, 5
1 / 1 = 0, 1
1555
*/