/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:40:47 by mlink             #+#    #+#             */
/*   Updated: 2022/05/30 16:49:44 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

// Allocates the requested memory and returns a pointer to it.

void	*ft_memalloc(size_t size)
{
	void	*blank;

	if (size == 0)
		return (NULL);
	blank = malloc(size);
	if (!blank)
		return (NULL);
	ft_bzero(blank, size);
	return (blank);
}
