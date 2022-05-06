/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:14:22 by mlink             #+#    #+#             */
/*   Updated: 2022/05/04 11:30:21 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Creat a new list based on the submitted passing through a function.

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlst;
	t_list	*newsave;

	newlst = ft_lstnew(NULL, 0);
	if (!lst || !(newlst))
		return (NULL);
	newlst = f(lst);
	newsave = newlst;
	while (lst->next)
	{
		lst = lst->next;
		newlst->next = f(lst);
		newlst = newlst->next;
	}
	return (newsave);
}
