/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 18:17:58 by mlink             #+#    #+#             */
/*   Updated: 2022/05/30 16:48:58 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

// Checks whether a character is uppercase alphabet (a-z) or not

int	clearft_isupper(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (1);
	return (0);
}
