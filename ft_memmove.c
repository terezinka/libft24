/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezkoro <tbezkoro@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:57:44 by tbezkoro          #+#    #+#             */
/*   Updated: 2022/10/27 13:35:18 by tbezkoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
	{
		return (0);
	}
	if (src < dst)
	{
		i = len;
		while (i > 0)
		{
			i--;
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/*#include <string.h>
#include <stdio.h>
int main ()
{
    char src[] = "Vareniki z smetankou dkjdkjd dkjdkjdkjdkj jkdjkdjdjdkkd";
    char dst[] = "Vareniki z vishneu";
	ft_memmove(dst, src, strlen (src));
	printf("%s\n", dst);
}*/