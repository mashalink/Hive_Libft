/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 14:27:56 by mlink             #+#    #+#             */
/*   Updated: 2022/05/04 13:34:47 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Shall return a pointer to a new string, which is 
// a joint of the strings.

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;

	if (!s1 || !s2)
		return (0);
	new = ft_strnew(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (!new)
		return (0);
	ft_strcpy(new, s1);
	ft_strcat(new, s2);
	return (new);
}
