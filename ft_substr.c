/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezkoro <tbezkoro@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:16:46 by tbezkoro          #+#    #+#             */
/*   Updated: 2022/11/01 23:20:05 by tbezkoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*dest;
	unsigned int	len_s;

	i = 0;
	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	if (start > len_s)
		return (ft_strdup(""));
	s += start;
	if (len_s < len)
		len = len_s;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (i < len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[] = "mlunci z vushnevum vareniam mmmm";
 
    int start = 19;
    int len = 8;
 
    char* dest = ft_substr(s, start, len);
 
    printf("%s\n", dest);
 
    return 0;
}*/