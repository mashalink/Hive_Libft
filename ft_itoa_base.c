/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:43:17 by mlink             #+#    #+#             */
/*   Updated: 2022/05/04 10:44:15 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Converts an integer value to a null-terminated string using  
// the specified base and stores the result in a char array
// that you must allocate.

char	*ft_itoa_base(uintmax_t x, int base)
{
	char		*str;
	char		*base_s;
	uintmax_t	nbr;
	int			len;

	len = 0;
	nbr = x;
	base_s = "0123456789abcdef";
	while (nbr)
	{
		nbr /= base;
		len++;
	}
	str = ft_clean_str(len, x);
	while (x > 0)
	{
		str[--len] = base_s[x % base];
		x /= base;
	}
	return (str);
}
