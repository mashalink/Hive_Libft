/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 10:47:32 by mlink             #+#    #+#             */
/*   Updated: 2022/05/30 16:51:20 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

// Applies the function f to each character of the string passed 
// as argument, and passing its index as first argument.

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned char	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			f(i, s + i);
			i++;
		}
	}
	return ;
}
