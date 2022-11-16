/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezkoro <tbezkoro@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:47:37 by tbezkoro          #+#    #+#             */
/*   Updated: 2022/11/01 22:07:26 by tbezkoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*tmp;

	if (lst != NULL && f != NULL)
	{
		new_lst = ft_lstnew(f(lst->content));
		tmp = new_lst;
		while (lst != NULL && lst->next != NULL)
		{
			lst = lst->next;
			tmp->next = ft_lstnew(f(lst->content));
			if (tmp->next == NULL)
			{
				ft_lstclear(&new_lst, del);
				return (NULL);
			}
			tmp = tmp->next;
		}
		return (new_lst);
	}
	return (NULL);
}
