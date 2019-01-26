/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:49:33 by mbin              #+#    #+#             */
/*   Updated: 2019/01/26 18:14:27 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

int main(int argc, char **argv)
{
	int fd;
	char **line;
	int a;

	fd = open(argv[1], O_RDONLY);
	while((a = get_next_line(fd, line)) > 0)
	{
		printf("%d %s\n",a, *line);
		free(line);
	}
	printf("%d\n",a);
	close(fd);
}
