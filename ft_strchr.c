/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezkoro <tbezkoro@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:27:35 by tbezkoro          #+#    #+#             */
/*   Updated: 2022/11/01 23:08:53 by tbezkoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *) s;
	while (*str != '\0')
	{
		if (*str == (char)c)
			return (str);
		str++;
	}
	if (*str == (char)c)
		return (str);
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     char s[] = "Vareniki z smetankou";
//     printf("ft_strchr(s, 'r') ==  s + 1 is %d\n",
// ft_strchr(s, 'r') == s + 2);
// 	return (0);
// }