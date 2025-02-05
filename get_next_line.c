/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <mbin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 17:54:46 by mbin              #+#    #+#             */
/*   Updated: 2019/01/31 18:07:41 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_clean_and_push(char **file, int n)
{
	char	*fresh;

	if ((*file)[n + 1] == 0)
	{
		ft_strdel(file);
		return (NULL);
	}
	fresh = ft_strdup(*file + n + 1);
	ft_strdel(file);
	return (fresh);
}

int		read_file(const int fd, char **file)
{
	char	buf[BUFF_SIZE + 1];
	int		r;
	char	*is_there_n;

	if (fd == -1)
		return (-1);
	is_there_n = NULL;
	while ((r = read(fd, buf, BUFF_SIZE)) && !is_there_n)
	{
		buf[r] = 0;
		*file = ft_strjoinfree(*file, buf);
		if (!file || !(*file))
			return (-1);
		if (r == -1)
		{
			ft_strdel(file);
			return (-1);
		}
		is_there_n = ft_strchr(*file, '\n');
	}
	if (*file == NULL)
		return (0);
	return (1);
}

int		write_line(char **file, char **line)
{
	int		i;
	char	*ligne;
	char	*cpfile;

	cpfile = *file;
	i = 0;
	while (cpfile[i] && cpfile[i] != '\n')
		i++;
	if (!(ligne = (char *)malloc((i + 1) * sizeof(char))))
		return (-1);
	if (ligne == NULL)
		return (-1);
	i = 0;
	while (cpfile[i] && cpfile[i] != '\n')
	{
		ligne[i] = cpfile[i];
		i++;
	}
	ligne[i] = 0;
	if (cpfile[i] == '\n')
		*file = ft_clean_and_push(file, i);
	else
		ft_strdel(file);
	*line = ligne;
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char	*file = NULL;
	int			r;

	if (!line)
		return (-1);
	r = read_file(fd, &file);
	if (r == -1)
	{
		ft_strdel(&file);
		return (-1);
	}
	if (r == 0)
		return (0);
	r = write_line(&file, line);
	if (r == -1)
		return (-1);
	if (r == 0)
		return (0);
	return (1);
}
