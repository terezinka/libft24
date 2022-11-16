/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezkoro <tbezkoro@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:02:33 by tbezkoro          #+#    #+#             */
/*   Updated: 2022/11/01 22:03:16 by tbezkoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (dstsize != 0)
	{
		while (i < dstsize - 1 && i <= src_len)
		{
			dst[i] = src[i];
			if (dst[i] == '\0')
				return (src_len);
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}

// # include <stdio.h>

// int main() {
// 	int	n;
// 	char	*dest;

// 	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
// 		return (0);
// 	memset(dest, 0, 15);
// 	memset(dest, 'r', 6);
// 	n = ft_strlcpy(dest, "", 15);
// 	printf("%d\n", n);
// }

// int main() {
//  int i;
//  char dst_org[] = "kolomyya"; // full size of dst = 9
//  char src_org[] = "kolom";
//  char dst[] = "kolomyya"; // full size of dst = 9
//  char src[] = "kolom";

//  char *n = NULL;

// i = strlcpy(dst_org, src_org, 9);
// printf("Orig f dst = %s, original function returns %d\n", dst_org, i);
// printf("Mine f dst = %s, mine function returns %d\n", dst, i);
// }

// // strlcpy copys size of dst - 1

// // i < dstsize == i <= dstsize - 1

// // x < 8 == x <= 8 - 1
