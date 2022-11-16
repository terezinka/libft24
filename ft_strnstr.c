/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezkoro <tbezkoro@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:44:41 by tbezkoro          #+#    #+#             */
/*   Updated: 2022/11/01 22:26:19 by tbezkoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (haystack[i] && i < len)
	{
		while (needle[j] && haystack [j + i] && (i + j) < len)
		{
			if (haystack[i + j] != needle[j])
				break ;
			j++;
			if (!needle[j])
				return ((char *)(haystack + i));
		}
		j = 0;
		i++;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int main ()
// {
// 	char str1[]= "Blakblabla";
// 	char str2[]= "kbla";
// 	printf("%s\n", ft_strnstr(str1, str2, 50));
// 	return 0;
// }