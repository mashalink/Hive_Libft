/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 14:13:34 by mlink             #+#    #+#             */
/*   Updated: 2022/05/06 13:22:02 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Compares to n characters from two strings character by character . 
// If the strings are equal, the function returns 0.
// If the strings are not equal, the function returns 1.

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (n == 0)
		return (1);
	if (s1 && s2)
	{
		if (ft_strncmp(s1, s2, n))
			return (0);
		return (1);
	}
	return (0);
}
