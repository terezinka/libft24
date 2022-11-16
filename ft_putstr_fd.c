/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezkoro <tbezkoro@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:46:02 by tbezkoro          #+#    #+#             */
/*   Updated: 2022/10/27 12:16:43 by tbezkoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write (fd, s, ft_strlen(s));
}

// #include <stdio.h>
// int main()
// {
// 	char str[] = " kolomyia \n";
// 	ft_putstr_fd(str,1);
// 	// printf("%s\n", str);
// }