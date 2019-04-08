/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 09:53:26 by fkante            #+#    #+#             */
/*   Updated: 2019/04/07 14:48:10 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	int		fd;
	char	buf[BUF_SIZE + 1];

	if (ac == 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	fd = open(av[1], O_RDWR);
	if (fd == -1)
	{
		ft_putstr("File cannot be opened\n");
		return (0);
	}
	while (read(fd, buf, BUF_SIZE))
	{
		write(1, &buf, 1);
	}
	close(fd);
	return (0);
}
