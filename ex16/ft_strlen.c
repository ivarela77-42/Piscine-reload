/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:10:05 by ivarela77         #+#    #+#             */
/*   Updated: 2023/12/15 14:04:42 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}

/* int	main(void)
{
	char str[5] = "Hola";
	printf("La longitud de '%s' es de: %i caracteres\n", str, ft_strlen(str));
	return (0);
} */
