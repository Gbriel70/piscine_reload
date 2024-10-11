/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 11:17:01 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/10/11 13:22:49 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	int		fd;
	char	buf;

	if (ac == 1)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	if (ac > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (1);
	while (read(fd, &buf, 1) != 0)
		write(1, &buf, 1);
	close(fd);
	return (0);
}
