/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezkoro <tbezkoro@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:19:46 by tbezkoro          #+#    #+#             */
/*   Updated: 2022/10/27 12:18:00 by tbezkoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{	
	if (s == NULL)
		return ;
	write (fd, s, ft_strlen(s));
	ft_putchar_fd('\n', fd);
}

// #include <stdio.h>
// int main()
// {
// 	char str[] = " kolomyia ";
// 	ft_putendl_fd(str,1);
// 	// printf("%s\n", str);
// }