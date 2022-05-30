/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 10:55:42 by mlink             #+#    #+#             */
/*   Updated: 2022/05/30 16:48:34 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

// Checks if the passed character is alphanumeric.

int	ft_isalnum(int ch)
{
	if (ft_isalpha(ch) || ft_isdigit(ch))
		return (1);
	return (0);
}
