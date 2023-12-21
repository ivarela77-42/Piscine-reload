/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:47:41 by ivarela77         #+#    #+#             */
/*   Updated: 2023/12/20 20:04:39 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_display_file(char *file_name)
{
	int		fd;
	int		read_file;
	char	c;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (0);
	while (1)
	{
		read_file = read(fd, &c, 1);
		if (read_file == -1)
			return (0);
		if (read_file == 0)
			break ;
		write(1, &c, 1);
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		write(2, "File name missing.\n", 20);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 21);
	else
		if (!ft_display_file(argv[1]))
			write(2, "Cannot read file.\n", 19);
	return (0);
}
