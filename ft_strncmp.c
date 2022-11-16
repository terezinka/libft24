/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezkoro <tbezkoro@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:11:09 by tbezkoro          #+#    #+#             */
/*   Updated: 2022/10/27 18:12:32 by tbezkoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	while ((s1[a] || s2[a]) && a < n)
	{
		if (s1[a] != s2[a])
			return (((unsigned char *)s1)[a] - ((unsigned char *)s2)[a]);
		a++;
	}
	return (0);
}

// #include <stdio.h>
// int main() 
// {
//     const char    s1[] = "VARENIKI";
//     const char    s2[] = "VARENIKI";
// 	const char    s3[] = "z vishneu";
//     const char    s4[] = "smetankou";
//     size_t  n;
//     n = 1;
//     printf("Result: %d\n", ft_strncmp(s1, s2, n));
// 	printf("Result: %d", ft_strncmp(s3, s4, n));
//     return (0);
// }