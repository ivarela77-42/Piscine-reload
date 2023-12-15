/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 20:40:49 by ivarela77         #+#    #+#             */
/*   Updated: 2023/12/12 20:40:53 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_swap(int *a, int *b)
{
	int	temp_num;

	temp_num = *a;
	*a = *b;
	*b = temp_num;
}

/* int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 7;
	printf("%i%i%c", a, b, '\n');
	ft_swap(&a, &b);
	printf("%i%i", a, b);
	return (0);
} */
