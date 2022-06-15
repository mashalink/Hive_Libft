/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 13:58:43 by mlink             #+#    #+#             */
/*   Updated: 2022/05/30 16:49:52 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

// Searches for the first occurrence of the character c 
// (an unsigned char) in the first n bytes of the string 
// pointed to, by the argument str.

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*i;

	i = (unsigned char *)str;
	while (n--)
	{
		if (*i == ((unsigned char)c))
			return (i);
		i++;
	}
	return (NULL);
}
