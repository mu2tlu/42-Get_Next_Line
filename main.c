#include "get_next_line.h"

int main()
{
    int fd;
    int i = 0;
    fd = open("4mu2.txt",O_RDONLY);
    while(i < 10)
    {
        printf("%s",get_next_line(fd));
		i++;
    }
	return 0;
}
