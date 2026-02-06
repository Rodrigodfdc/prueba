/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:57:31 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/06 22:01:43 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, size_t c)
{
	while (*s != (char)c && *s != '\0')
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hola Mundo";
	char	*result;

	result = ft_strchr(str, 'T');
	if (result)
		printf("¡¡¡Encontrado!!!: %s\n", result);
	else
		printf("¡¡¡¡No Encontrado!!!\n");
	result = ft_strchr(str, 'M');
	if (result)
		printf("¡¡¡Encontrado!!!: %s\n", result);
	else
		printf("¡¡¡¡No Encontrado!!!\n");
	return (0);
}
*/