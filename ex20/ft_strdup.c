/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:49:17 by ivarela77         #+#    #+#             */
/*   Updated: 2023/12/21 13:28:44 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		length;
	int		index;

	length = 0;
	while (src[length])
		length++;
	dest = malloc(sizeof(char) * (length + 1));
	if (!dest)
		return (0);
	index = 0;
	while (index < length)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	main(void)
{
	char	saludo[5];
	char	*ptr;

	saludo[5] = "Hola";
	ptr = ft_strdup(saludo);
	printf("%s\n", ptr);
	return (0);
}
