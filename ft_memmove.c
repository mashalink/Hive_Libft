/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 10:55:59 by mlink             #+#    #+#             */
/*   Updated: 2022/05/04 11:49:48 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies n characters from str2 to str1, but for 
// overlapping memory blocks, memmove() is a safer 
// approach than memcpy().

void	*ft_memmove(void *destination, const void *source, size_t len)
{
	if (destination > source)
	{
		while (len-- > 0)
			((unsigned char *)destination)[len] = \
			((unsigned char *)source)[len];
	}
	else if (destination < source)
		ft_memcpy(destination, source, len);
	return (destination);
}
