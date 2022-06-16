/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:30:28 by mlink             #+#    #+#             */
/*   Updated: 2022/06/16 16:34:24 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "stdio.h"
// Searches for the first occurrence of the character c 
// (an unsigned char) in the string pointed to by the argument str.

char	*ft_strchr(const char *str, int ch)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ch)
			return ((char *)str);
		i++;
	}
	if (ch == 0 && str[i] == '\0')
		return ((char *)str);
	return (NULL);
}
