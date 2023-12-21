/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:59:19 by ivarela77         #+#    #+#             */
/*   Updated: 2023/12/21 13:26:02 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int	index;

	index = 97;
	while (index < 123)
	{
		ft_putchar(index);
		index++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}