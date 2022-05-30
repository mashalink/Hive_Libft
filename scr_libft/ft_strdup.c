/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 11:51:12 by mlink             #+#    #+#             */
/*   Updated: 2022/05/30 16:51:09 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

// Shall return a pointer to a new string, which is 
// a duplicate of the string pointed to by s1.

char	*ft_strdup(const char *src)
{
	char	*cope;
	int		i;

	i = 0;
	cope = NULL;
	cope = (char *)malloc(sizeof(*cope) * ft_strlen(src) + 1);
	if (!(cope))
		return (NULL);
	while (src[i])
	{
		cope[i] = src[i];
		i++;
	}
	cope[i] = '\0';
	return (cope);
}
