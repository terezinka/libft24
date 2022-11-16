/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezkoro <tbezkoro@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:50:38 by tbezkoro          #+#    #+#             */
/*   Updated: 2022/10/27 16:05:52 by tbezkoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (s == NULL || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// void f(unsigned int i, char *s)
// {
// 	s[i]++;
// }

// int main()
// {
// 	char str1[] = " hhhh jjj hjygiu ";
// 	char* str2;
// 	ft_striteri(str1, *f);
// 	printf("%s\n", str1);
// }