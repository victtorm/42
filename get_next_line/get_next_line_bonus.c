/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:28:14 by vbritto-          #+#    #+#             */
/*   Updated: 2023/11/21 18:12:20 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_read(int fd, char *stash)
{
	char	*buffer;
	int		read_bytes;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	read_bytes = 1;
	while (!ft_strchr(stash, '\n') && read_bytes > 0)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(stash);
			free(buffer);
			return (NULL);
		}
		buffer[read_bytes] = '\0';
		stash = ft_strjoin(stash, buffer);
	}
	free(buffer);
	return (stash);
}

static char	*extract_line(char *stash)
{
	char	*line;
	int		len;
	int		i;

	if (!*stash)
		return (NULL);
	len = 0;
	while (stash[len] && stash[len] != '\n')
		len++;
	line = malloc(sizeof(char) * (len + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

static char	*clean_stash(char *stash)
{
	char	*str;
	int		len;
	int		i;

	if (!*stash)
	{
		free(stash);
		return (NULL);
	}
	len = 0;
	while (stash[len] && stash[len] != '\n')
		len++;
	str = malloc(sizeof(char) * (ft_strlen(stash) - len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (stash[len])
		str[i++] = stash[++len];
	str[i] = '\0';
	free(stash);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*stash[MAX_FILES];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash[fd] = ft_read(fd, stash[fd]);
	if (!stash[fd])
		return (NULL);
	line = extract_line(stash[fd]);
	stash[fd] = clean_stash(stash[fd]);
	return (line);
}

/*
#include <stdio.h>
int  main(void)
{
	int     fd1;
	int     fd2;
	int     fd3;
	char    *line;

	fd1 = open("texto.txt", O_RDONLY);
	fd2 = open("texto2.txt", O_RDONLY);
	fd3 = open("texto3.txt", O_RDONLY);


	printf("\nLINE 1\n");

	line = get_next_line(fd1);
		printf("%s", line);
		free (line);

		printf("\nLINE 2\n");

	line = get_next_line(fd2);
		printf("%s", line);
		free (line);

	printf("\nLINE 3\n");

	line = get_next_line(fd3);
		printf("%s", line);
		free (line);

	printf("\nLINE 4\n");

	line = get_next_line(fd1);
		printf("%s", line);
		free (line);

	printf("\nLINE 5\n");

	line = get_next_line(fd2);
		printf("%s", line);
		free (line);

		printf("\nLINE 6\n");

	line = get_next_line(fd3);
		printf("%s", line);
		free (line);

	return (0);
}
*/
