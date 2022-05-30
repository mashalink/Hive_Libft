/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 11:37:36 by mlink             #+#    #+#             */
/*   Updated: 2022/05/30 16:51:31 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

// Returns the given string with certain characters replaced
// or deleted according to a particular mapping

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*new;
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		new = ft_strnew(ft_strlen((char *)s));
		if (new == NULL)
			return (NULL);
		while (s[i] != '\0')
		{
			new[i] = f(s[i]);
			i++;
		}
		return (new);
	}
	return (NULL);
}
