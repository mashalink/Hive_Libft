/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 17:11:14 by mlink             #+#    #+#             */
/*   Updated: 2022/06/15 13:51:30 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_args(va_list args, t_all *all, char c, int i)
{
	if (c == 'd' || c == 'i')
		ft_int(args, all);
	else if (c == 'o' || c == 'O' || c == 'x' || c == 'X' \
	|| c == 'b' || c == 'u' || c == 'U')
		ft_type_buox(args, all, c);
	else if (c == 's')
		ft_str(args, all);
	else if (c == 'p')
		ft_pointer(args, all);
	else if (c == 'f' || c == 'F')
		ft_double(args, all);
	else
		ft_char(args, all, c);
	return (++i);
}

static int	save_print_buffer(t_all *all, const char *form, int i)
{
	if (all->count < 1024)
		all->buffer[all->count++] = form[i++];
	else
		print_buffer(all);
	return (i);
}

static int	ft_first(const char *form, va_list args, int fd, t_all *all)
{
	size_t	i;

	i = 0;
	while (form[i])
	{
		if (form[i] == '%')
		{
			all = ft_clean(all);
			all->fd = fd;
			i = ft_set_print(form, i, all);
			if (form[i - 1] != '}')
			{
				i = ft_save(form, i, all, args);
				if (i >= ft_strlen(form))
					break ;
				i = print_args(args, all, form[i], i);
			}
		}
		while (form[i] && form[i] != '%')
			i = save_print_buffer(all, form, i);
	}
	all->save_count = all->count;
	return (all->save_count);
}

int	ft_printf(const char *form, ...)
{
	va_list	args;
	int		count;
	t_all	*all;

	all = NULL;
	count = 0;
	all = (t_all *)ft_memalloc(sizeof(t_all));
	if (!all)
		exit(0);
	all->count = 0;
	all->save_count = 0;
	va_start(args, form);
	count = ft_first(form, args, 1, all);
	va_end(args);
	all->buffer[all->count] = '\0';
	write(1, all->buffer, all->count);
	free(all);
	return (count);
}

int	fd_printf(int fd, const char *form, ...)
{
	va_list	args;
	int		count;
	t_all	*all;

	all = NULL;
	count = 0;
	all = (t_all *)ft_memalloc(sizeof(t_all));
	if (!all)
		exit(0);
	all->count = 0;
	all->save_count = 0;
	va_start(args, form);
	count = ft_first(form, args, fd, all);
	va_end(args);
	all->buffer[all->count] = '\0';
	write(fd, all->buffer, all->count);
	free(all);
	return (count);
}
