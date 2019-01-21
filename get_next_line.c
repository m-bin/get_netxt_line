#include "get_next_line.h"

int	get_next_line(const int fd, char **line)
{
	static char	*previous = NULL;
	int		i;
	char		*buf;

	i = 0;
	buf = (char *)malloc((BUFF_SIZE + 1)*sizeof(char));
	if (previous)
	{
		while (previous[i] && previous[i] != '\n')
			i++;
		if (previous[i] == '\n')
		{
			*line = (char *)malloc((i + 1)sizeof(char));
			if (line == NULL)
				return -1;
			i = 0;
			while (previous[i] && previous[i] != '\n')
			{
				(*line)[i] = previous[i];
				i++;
			}
			previous = previous + i + 1;
			

