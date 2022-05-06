/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:03:40 by mlink             #+#    #+#             */
/*   Updated: 2022/05/06 13:01:46 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// locates the first occurrence of the null-terminated string  str2 
// in the string str1, where not more than len characters are searched.

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (str2[i] == '\0')
		return ((char *)str1);
	while (str2[j] != '\0' && str1[i] != '\0' && 0 < len)
	{
		if (str2[j] == str1[i + j])
			j++;
		else
		{
			i++;
			j = 0;
		}
		len--;
	}
	if (str2[j] == '\0')
		return ((char *)str1 + i);
	else
		return (NULL);
}
