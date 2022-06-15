/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 13:45:06 by mlink             #+#    #+#             */
/*   Updated: 2022/06/15 13:46:07 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_all	*ft_clean(t_all *all)
{
	all->mod_l = 0;
	all->mod_ll = 0;
	all->mod_h = 0;
	all->mod_hh = 0;
	all->mod_j = 0;
	all->mod_z = 0;
	all->mod_big_l = 0;
	all->prec = 0;
	all->f_prec = 0;
	all->width = 0;
	all->f_minus = 0;
	all->f_plus = 0;
	all->f_space = 0;
	all->f_hash = 0;
	all->f_zero = 0;
	all->fd = 0;
	all->neg = 0;
	all->x = 0;
	return (all);
}
