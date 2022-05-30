/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:25:52 by mlink             #+#    #+#             */
/*   Updated: 2022/05/30 16:48:30 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

// Shall place n zero-valued bytes in the area pointed to by s

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
