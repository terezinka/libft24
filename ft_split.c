/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezkoro <tbezkoro@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:59:15 by tbezkoro          #+#    #+#             */
/*   Updated: 2022/11/01 21:49:41 by tbezkoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdbool.h>

static int	count_words(char const *s, char c)
{
	int		i;
	int		splits;
	bool	check;

	i = 0;
	check = 0;
	splits = 1;
	if (!*s)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
			check = 1;
		if (s[i] == c && check == 1)
		{
			check = 0;
			splits++;
		}
		i++;
	}
	if (s[i - 1] == c)
		splits--;
	return (splits);
}

static char	*set_word(char *s, char **res, char c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	*res = (char *)malloc((i + 1) * sizeof(char));
	if (!*res)
		return (NULL);
	i = 0;
	while (*s && *s != c)
	{
		(*res)[i] = *s;
		i++;
		s++;
	}
	(*res)[i] = '\0';
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	res = (char **)malloc((words + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		s = set_word((char *)s, &res[words], c);
		words++;
	}
	res[words] = NULL;
	return (res);
}

// int main()
// {
//     char s[] = " Kolomia the best city  ";
//     char c = ' ';
//     char **res;
//     res = ft_split(s, c);
//     for (int i = 0; res[i]; i++)
//         printf("%s\n", res[i]);
// }
