/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 11:19:08 by mlink             #+#    #+#             */
/*   Updated: 2022/05/30 16:52:29 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

// Takes an uppercase alphabet and convert it to a lowercase character

int	ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z' )
		ch += 32;
	return (ch);
}
