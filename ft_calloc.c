/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezkoro <tbezkoro@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:15:13 by tbezkoro          #+#    #+#             */
/*   Updated: 2022/11/01 23:26:43 by tbezkoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;
	size_t	i;

	i = 0;
	if (size != 0 && SIZE_MAX / size < count)
		return (NULL);
	memory = malloc(count * size);
	if (memory == NULL)
		return (0);
	while (i < count * size)
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}

// #include <stdio.h>
// int main(void)
// {
// 	int *mem;
// 	mem = ft_calloc(5, 3);
// 	printf("%p\n", mem);
// 	return 0;
// }
