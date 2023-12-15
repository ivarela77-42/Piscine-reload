/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 21:10:37 by ivarela77         #+#    #+#             */
/*   Updated: 2023/12/14 18:13:46 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	cont;

	if (nb < 0 || nb > 12)
		return (0);
	factorial = 1;
	cont = 1;
	while (cont <= nb)
	{
		factorial *= cont;
		cont++;
	}
	return (factorial);
}

/* int	main(void)
{
	int num = 132;
	printf("El factorial de %i es: %i\n", num, ft_iterative_factorial(num));
	return (0);
} */