/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezkoro <tbezkoro@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:18:42 by tbezkoro          #+#    #+#             */
/*   Updated: 2022/11/01 22:40:52 by tbezkoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	if (!dst && !dstsize)
		return (0);
	i = 0;
	j = ft_strlen(dst);
	dst_len = j;
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	if (dstsize != 0)
	{
		while (j < dstsize - 1 && i <= src_len)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	return (src_len + dst_len);
}

// #include <string.h>
// #include <unistd.h>

// int main() {
// 	char	*dest;
// 	size_t	res;

// 	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
// 		return (0);
// 	memset(dest, 0, 15);
// 	memset(dest, 'r', 6);
// 	memset(dest, 'r', 15);
// 	res = ft_strlcat(dest, "lorem ipsum dolor sit amet", 5);
// 	printf("%zu\n", res);
// 	write(1, "\n", 1);
// 	write(1, dest, 15);
// }

// int main() {
//  int i;
//  char buff[] = "Tereza"; // full size of dst = 9
//  char src_org[] = " z Kolomyi";
//  char src[] = " z Kolomyi";

//  char dst_org[15];
//     char dst[15];

//     strcpy(dst_org, buff);
//     strcpy(dst, buff);
//     i = strlcat(dst_org, src_org, 15);
//  printf("Orig f dst = %s, original function returns %d\n", dst_org, i);
//  i = ft_strlcat(dst, src, 15);
//  printf("Mine f dst = %s, mine function returns %d\n", dst, i);
// }