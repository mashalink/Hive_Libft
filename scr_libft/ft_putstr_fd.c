/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 10:27:14 by mlink             #+#    #+#             */
/*   Updated: 2022/05/30 16:50:32 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

// Prints a string to file discriptor.

void	ft_putstr_fd(const char *s, int fd)
{
	size_t	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i])
			ft_putchar_fd(s[i++], fd);
	}
}
