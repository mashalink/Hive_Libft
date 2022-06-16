/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 12:11:04 by mlink             #+#    #+#             */
/*   Updated: 2022/06/16 16:58:55 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

// Check string. Is it nubrer or not. If false will return 0.

int	ft_isint(char *str)
{
	int	sign;
	int	len;
	int	dig;

	len = 0;
	dig = 0;
	while (*str && ft_isspace((*str)))
		str++;
	sign = 1;
	if (*str && *str == '-')
		sign = -1;
	if (*str && (*str == '-' || *str == '+'))
		str ++;
	while (*str && ft_isdigit(*str))
	{
		if (++len > 10)
			return (0);
		if ((sign == 1 && len == 10 && ((*str - '0') > 7 || dig > 214748364)) \
		|| (sign == -1 && len == 10 && ((*str - '0') > 8 || dig > 214748364)))
			return (0);
		dig = dig * 10 + (*str - '0');
		str ++;
	}
	return (!(*str));
}
