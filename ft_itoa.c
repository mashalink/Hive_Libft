/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 11:18:02 by mlink             #+#    #+#             */
/*   Updated: 2022/05/04 10:52:11 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Converts int data type to string data type.

static int	ft_numlen(int n)
{
	int		i;

	i = 1;
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	i;
	char	*str;
	int		neg;

	if (n == -2147483648)
		return ("-2147483648");
	neg = 0;
	if (n < 0)
		neg = 1;
	if (n < 0)
		n *= -1;
	i = ft_numlen(n) + neg;
	str = (char *)ft_strnew(i);
	if (!(str))
		return (NULL);
	str[i--] = '\0';
	while (n >= 10)
	{
		str[i--] = n % 10 + '0';
		n = n / 10;
	}
	str[i] = n % 10 + '0';
	if (neg)
		str[0] = '-';
	return (str);
}
