/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 16:38:03 by mlink             #+#    #+#             */
/*   Updated: 2022/05/30 16:50:39 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

// Concatenates the destination string and the source string,
// and the result is stored in the destination string.

char	*ft_strcat(char *destination, const char *append)
{
	char	*append2;
	char	*destination2;

	destination2 = destination;
	append2 = (char *)append;
	while (*destination2 != '\0')
		destination2++;
	while (*append2 != '\0')
		*destination2++ = *append2++;
	*destination2 = '\0';
	return (destination);
}
