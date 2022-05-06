/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 10:27:06 by mlink             #+#    #+#             */
/*   Updated: 2022/05/04 13:09:09 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Prints character to file descriptor.

void	ft_putstr(const char *s)
{
	size_t	i;

	i = 0;
	if (s != NULL)
		while (s[i])
			ft_putchar(s[i++]);
}
