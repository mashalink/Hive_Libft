/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 18:27:35 by mlink             #+#    #+#             */
/*   Updated: 2022/05/04 11:25:50 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Print strings of list.

void	ft_lstprint(t_list *list)
{
	t_list	*temp;

	temp = list;
	while (temp)
	{
		write(1, temp->content, temp->content_size);
		write(1, "\n", 1);
		temp = temp->next;
	}
}
