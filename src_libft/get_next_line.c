/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:49:47 by mlink             #+#    #+#             */
/*   Updated: 2022/06/16 17:20:38 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

// Reads a file and returns text line by line.
// Line is a text between line feed.

static int	ft_line(char **s, char **line)
{
	int		len;
	char	*tmp;

	len = 0;
	while ((*s)[len] != '\n' && (*s)[len] != '\0')
		len++;
	if ((*s)[len] == '\n')
	{
		*line = ft_strsub(*s, 0, len);
		tmp = ft_strdup(&((*s)[len + 1]));
		if (*line == NULL || tmp == NULL)
			return (-1);
		free(*s);
		*s = tmp;
		if ((*s)[0] == '\0')
			ft_strdel(s);
	}
	else
	{
		*line = ft_strdup(*s);
		ft_strdel(s);
		if (*line == NULL)
			return (-1);
	}
	return (1);
}

static int	creat_line(const int fd, char **line, char **s, int ret)
{
	char		buff[BUFF_SIZE + 1];
	char		*tmp;

	ret = read(fd, buff, BUFF_SIZE);
	if (ret < 0)
		return (-1);
	else if (ret == 0 && s[0][0] == '\0')
	{
		*line = NULL;
		return (0);
	}
	while (ret > 0)
	{
		buff[ret] = '\0';
		tmp = ft_strjoin(s[0], buff);
		if (tmp == NULL)
			return (-1);
		free(s[0]);
		s[0] = tmp;
		if (ft_strchr(s[fd], '\n'))
			break ;
		ret = read(fd, buff, BUFF_SIZE);
	}
	return (ft_line(&s[0], line));
}

int	get_next_line(const int fd, char **line)
{
	int			ret;
	static char	*s[FD_SIZE];

	ret = 0;
	if (fd < 0 || FD_SIZE < fd || line == NULL || BUFF_SIZE < 1)
		return (-1);
	if (s[fd] == NULL)
		s[fd] = ft_strnew(0);
	if (s[fd] == NULL)
		return (-1);
	return (creat_line(fd, line, &s[fd], ret));
}
