/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 11:31:05 by mlink             #+#    #+#             */
/*   Updated: 2022/05/04 10:44:45 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Converts the string argument str to an integer (type int)

int	ft_atoi(const char *str)
{
	long	negative;
	long	x;

	if (str == NULL)
		return (0);
	x = 0;
	negative = 1;
	while (*str == 32 || (*str > 8 && *str < 14))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		x = (x * 10) + (*str - '0');
		str++;
	}
	return ((int)x * negative);
}
