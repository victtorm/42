/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:22:57 by vbritto-          #+#    #+#             */
/*   Updated: 2023/11/21 18:13:09 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash = ft_read(fd, stash);
	if (!stash)
		return (NULL);
	line = extract_line(stash);
	stash = clean_stash(stash);
	return (line);
}

/*
#include<stdio.h>
int	main(void)
{
	int		fd;
	char	*str;

	fd = open("texto.txt", O_RDONLY);
	str = get_next_line(fd);
	if (fd == -1)
	{
		printf("Error\n");
		return (0);
	}
	printf("Your fd file is %d\n", fd);
	while (str != NULL)
	{
		printf("%s", str);
		free(str);
		str = get_next_line(fd);
	}
	printf("Total of lines on file: %s", str);
	close(fd);
	return (0);
}

#include <stdio.h>
int  main(void)
{
	int     fd;
	char    *line;

	fd1 = open("read_error.txt", O_RDONLY);
	fd2 = open("texto.txt", O_RDONLY);
	fd3 = open("texto2.txt", O_RDONLY);


	printf("\nLINE 1\n");

	line = get_next_line(fd1);
		printf("%s", line);
		free (line);

		printf("\nLINE 2\n");

	line = get_next_line(fd2);
		printf("%s", line);
		free (line);
	close(fd);


	printf("\n ============== closed ============== \n");

	fd = open("read_error.txt", O_RDONLY);

	printf("\nLINE 1\n");

	line = get_next_line(fd);
		printf("%s", line);
		free (line);

	printf("\nLINE 2\n");

	line = get_next_line(fd);
		printf("%s", line);
		free (line);

	printf("\nLINE 3\n");

	line = get_next_line(fd);
		printf("%s", line);
		free (line);

	return (0);
}
*/
