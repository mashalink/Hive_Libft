/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:50:28 by mlink             #+#    #+#             */
/*   Updated: 2022/05/30 16:49:12 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

// Adds a node to the beginning of the list.

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*element;

	element = new;
	element->next = *alst;
	*alst = element;
}
