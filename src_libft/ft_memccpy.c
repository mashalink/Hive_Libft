/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 14:38:59 by mlink             #+#    #+#             */
/*   Updated: 2022/05/30 16:49:46 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

// Returns a pointer to the next character in dest after c, 
// or NULL if c was not found in the first n characters of src.

void	*ft_memccpy(void *dest, const void *src, int c,
size_t n)
{
	unsigned char	*dest2;
	unsigned char	*src2;

	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	while (n > 0)
	{
		*dest2 = *src2;
		dest2++;
		if (*src2 == (unsigned char)c)
			return (dest2);
		src2++;
		n--;
	}
	return (NULL);
}
