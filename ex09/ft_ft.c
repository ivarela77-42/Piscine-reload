/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:51:37 by ivanrodr          #+#    #+#             */
/*   Updated: 2023/12/21 13:26:49 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int		num;
	int		*nbr;

	num = 4;
	nbr = &num;
	printf("%i%c", num, '\n');
	ft_ft(nbr);
	printf("%i", num);
	return (0);
}
