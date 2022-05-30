/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:52:45 by mlink             #+#    #+#             */
/*   Updated: 2022/05/30 16:51:37 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

// Appends the string pointed to by append to the end of 
// the string pointed to by destination up to n characters long.

char	*ft_strncat(char *destination, const char *append, size_t len)
{
	char	*des2;
	char	*app2;

	des2 = destination;
	app2 = (char *)append;
	while (*des2 != '\0')
		des2++;
	while (*app2 != '\0' && len > 0)
	{
		*des2++ = *app2++;
		len--;
	}
	*des2 = '\0';
	return (destination);
}
