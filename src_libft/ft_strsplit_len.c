/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_len.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:49:13 by mlink             #+#    #+#             */
/*   Updated: 2022/06/17 13:52:02 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

// Cuts a string into an array with a string delimiter.
// Return how many pies has line.

size_t	ft_strsplit_len(char **split)
{
	size_t	i;

	i = 0;
	if (split)
	{
		while (*split)
		{
			i++;
			split++;
		}
	}
	return (i);
}
