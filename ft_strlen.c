/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezkoro <tbezkoro@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:31:16 by tbezkoro          #+#    #+#             */
/*   Updated: 2022/11/01 22:22:49 by tbezkoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

// #include <stdio.h>
// #include <string.h>
// int main ()
// {
// 	char str[50];
// 	int len;
// 	strcpy(str, "Vareniki z smetankou");
// 	len = strlen(str);
// 	printf("%s|%d|\n", str, len);

// 	return(0);
// }