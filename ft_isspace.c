/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 18:19:44 by mlink             #+#    #+#             */
/*   Updated: 2022/05/04 10:44:28 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Checks whether a character is a white-space character or not.

int	ft_isspace(int ch)
{
	if (ch == '\n' || ch == '\r' || ch == '\v' || ch == '\f'\
	|| ch == '\t' || ch == ' ')
		return (1);
	return (0);
}
