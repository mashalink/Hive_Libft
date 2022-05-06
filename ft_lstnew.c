/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 11:09:04 by mlink             #+#    #+#             */
/*   Updated: 2022/05/04 11:29:22 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Creat a new list.

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;
	void	*copy;

	new = (t_list *)malloc(sizeof(t_list));
	if (!(new))
		return (NULL);
	new->next = NULL;
	if (!content)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		copy = malloc(content_size);
		if (!(copy))
		{
			free(new);
			return (NULL);
		}
		new->content = ft_memcpy(copy, content, content_size);
		new->content_size = content_size;
	}
	return (new);
}
