/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:45:54 by ivarela77         #+#    #+#             */
/*   Updated: 2023/12/20 17:59:14 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_count_if(char **tab, int(*f)(char*))
{
	int	count;
	int	index;

	count = 0;
	index = 0;
	while (tab[index] != 0)
	{
		if (f(tab[index]) == 1)
			count++;
		index++;
	}
	return (count);
}

int	ft_checker(char *str)
{
	if (*str == 'a')
		return (1);
	return (0);
}

int	main(void)
{
	char *arr[] = { "apple", "ananas", "avocado", "orange", 0 }; //funciona con 0, '\0' y NULL
	printf("Se han encontrado %i que empiezan por 'a'.\n", ft_count_if(arr, ft_checker));
	return (0);
}