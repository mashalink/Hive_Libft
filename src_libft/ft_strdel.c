/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 13:35:23 by mlink             #+#    #+#             */
/*   Updated: 2022/05/30 16:51:06 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

// Removes a string

void	ft_strdel(char **as)
{
	if (as == NULL)
		return ;
	if (as && *as)
		free(*as);
	*as = NULL;
}
