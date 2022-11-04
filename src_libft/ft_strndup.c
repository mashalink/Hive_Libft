/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:53:36 by mlink             #+#    #+#             */
/*   Updated: 2022/11/04 14:54:18 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// returns a pointer to a new string that is a duplicate 
// of string s. Duplicate's length equals n.

#include "../includes/libft.h"

char	*ft_strndup(const char *str, int n)
{
	char	*dup;
	size_t	i;

	i = 0;
	dup = ft_strnew(n);
	if (!dup)
		return (NULL);
	while (str[i] && i < (size_t)n)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
