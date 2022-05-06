/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 10:13:10 by mlink             #+#    #+#             */
/*   Updated: 2022/05/04 11:52:54 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies the character c (an unsigned char) to the first n 
// characters of the string pointed to, by the argument str.

void	*ft_memset(void *destination, int c, size_t len)
{
	char	*ptr;

	ptr = (char *)destination;
	while (len > 0)
	{
		ptr[len - 1] = c;
		len--;
	}
	return (destination);
}
