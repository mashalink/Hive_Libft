/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 18:15:29 by mlink             #+#    #+#             */
/*   Updated: 2022/05/04 10:44:32 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Checks whether a character is lowercase alphabet (a-z) or not

int	ft_islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (1);
	return (0);
}
