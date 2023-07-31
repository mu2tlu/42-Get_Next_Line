/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:36:20 by mumutlu           #+#    #+#             */
/*   Updated: 2023/07/31 18:40:13 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int	main(void)
{
	char	*line;
	int		fd;
	int		resfd;
	int		i;

	fd = open("test.txt", O_RDONLY);
	resfd = open("sonuc.txt", O_RDWR);
	i = 0;
	while (i++ < 155)
	{
		line = get_next_line(fd);
		if (line == NULL)
			return (0);
		write(resfd, line, ft_strlen(line));
	}
	return (0);
}

/* #  define BUFFER_SIZE 5 
"gcc -D BUFFER_SIZE=3 get_next_line.c get_next_line_utils.c" 
burada yeni değer girildiği için bu değeri iptal ediyor. */