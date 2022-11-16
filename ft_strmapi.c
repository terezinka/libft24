/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezkoro <tbezkoro@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:21:11 by tbezkoro          #+#    #+#             */
/*   Updated: 2022/11/01 22:28:56 by tbezkoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*new;

	i = 0;
	if (s == NULL || !f)
		return (NULL);
	new = (char *)malloc(sizeof(char) *(ft_strlen(s)) + 1);
	if (new == NULL)
		return (NULL);
	while (s[i] != '\0')
	{			
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

// #include <stdio.h>
// char f(unsigned int i, char c)
// {
// 	char str;
// 	str = c + 1;
// 	return (str);
// }

// int main()
// {
// 	char str1[] = " abcttt ttt ";
// 	char* str2;
// 	str2 = ft_strmapi(str1, *f);
// 	printf("%s\n", str2);
// }