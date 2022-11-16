/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezkoro <tbezkoro@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:25:32 by tbezkoro          #+#    #+#             */
/*   Updated: 2022/10/27 13:44:16 by tbezkoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdlib.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

// //ft_memset(s, 0, n); 
// #include <stdio.h>
// int main ()
// {
//     char s[] = "Vareniki z smetankou";
// 	char *s = NULL;
// 	ft_bzero(s, 10);
// 	s = "\0\0\0\0\0\0\0\0\0\0smetankou\0"
// 	printf("%c", s[5]);
// }