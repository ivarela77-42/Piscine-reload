/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:54:43 by ivarela77         #+#    #+#             */
/*   Updated: 2023/12/21 13:30:23 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	if (num == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (num < 0)
	{
		ft_putchar('-');
		num = -num;
		ft_putnbr(num);
	}
	else if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
	{
		ft_putchar(num + 48);
	}
}

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	index;

	index = 0;
	while (index < length)
	{
		f(tab[index]);
		if (index < length - 1)
			ft_putchar('-');
		else
			ft_putchar('\n');
		index++;
	}
}

int	main(void)
{
	int	*tab;
	int	index;
	int	length;

	length = 10;
	tab = malloc(sizeof(int) * length);
	if (tab)
	{
		index = 0;
		while (index < length)
		{
			tab[index] = index + 1;
			index++;
		}
	}
	ft_foreach(tab, length, &ft_putnbr);
	return (0);
}
