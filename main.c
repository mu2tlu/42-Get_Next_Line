#include "get_next_line.h"

int main()
{
	char *line;
	int fd, i;

	fd = open("test.txt", O_RDONLY);
	int resfd = open("sonuc.txt", O_RDWR);
	i = 0;
	while (i++ < 155)
	{
		line = get_next_line(fd);
		if(line == NULL)
			return (0);
		write(, line, ft_strlen(line));
	}
	return (0);
}
