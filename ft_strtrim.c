/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezkoro <tbezkoro@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:28:04 by tbezkoro          #+#    #+#             */
/*   Updated: 2022/11/01 22:49:28 by tbezkoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool	ft_el_in_set(char a, char const *set)
{
	int	j;

	j = 0;
	while (set[j] != '\0')
	{
		if (set[j] == a)
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	size_t	cpy_i;
	char	*cpy;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (ft_el_in_set(s1[i], set) && s1[i] != '\0')
		i++;
	len = ft_strlen(s1);
	while (ft_el_in_set(s1[len - 1], set) && len > i)
		len--;
	cpy = (char *)malloc ((len - i + 1) * sizeof(char));
	if (!cpy)
		return (NULL);
	cpy_i = 0;
	while (i < len)
	{
		cpy[cpy_i] = s1[i];
		cpy_i++;
		i++;
	}
	cpy[cpy_i] = '\0';
	return (cpy);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
// 	printf("%s\n", ft_strtrim("abc  abqbc  cba ", "abc"));
// 	printf("%s\n", ft_strtrim("xavoc  adoyz", "xyz"));
// 	return 0;
// }
