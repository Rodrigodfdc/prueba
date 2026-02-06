/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:54:43 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/06 17:42:09 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char		dest[50];
	const char	src[] = "hello, world!";
	size_t		n;

	n = 13;
	ft_memcpy(dest, src, n);
	dest[n] = '\0'; // añadimos el caracter nulo de forma manual para
	printf("copia de destino: %s\n", dest);
	// comprobamos que la funcion funciona correctamtente
	if (strcmp(dest, src) == 0)
		printf("ft_memcpy funciona\n");
	else
		printf("Ha habido un error en la copia\n");
	return (0);
}*/
