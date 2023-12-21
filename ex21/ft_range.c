/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:32:00 by ivarela77         #+#    #+#             */
/*   Updated: 2023/12/21 13:28:53 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	index;

	ptr = NULL;
	if (max > min)
	{
		ptr = malloc(sizeof(int) * (max - min + 1));
		if (!ptr)
			return (0);
		index = 0;
		while (min < max)
		{
			ptr[index] = min;
			min++;
			index++;
		}
		ptr[index] = '\0';
	}
	return (ptr);
}

int	main(void)
{
	int	*result;
	int	index;

	result = ft_range(2, 2);
	if (result == NULL)
		printf("El mínimo no puede ser mayor o igual que el máximo\n");
	else
	{
		index = 0;
		while (result[index])
		{
			printf("%i\n", result[index]);
			index++;
		}
	}
	return (0);
}
