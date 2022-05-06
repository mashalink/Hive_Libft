/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 10:47:13 by mlink             #+#    #+#             */
/*   Updated: 2022/05/04 13:42:34 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  Applies the function f to each character of the string passed as argument.

void	ft_striter(char *s, void (*f)(char *))
{
	unsigned char	i;

	i = 0;
	if (s)
		while (s[i])
			f(s + i++);
	return ;
}
