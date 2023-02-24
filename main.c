#include "get_next_line.h"

int main()
{
	char *line;
	int fd, i;

	fd = open("4mu2.txt", O_RDONLY);
	i = 0;
	while (i++ < 155)
	{
		line = get_next_line(fd);
		if(line == NULL)
			return 0;
		printf("%s", line);

	}
}
