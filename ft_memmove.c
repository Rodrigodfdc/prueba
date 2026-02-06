/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:54:50 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/06 18:44:43 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (!dest && !source)
		return (NULL);
	if (dest == source || len == 0)
		return (dst);
	if (dest < source)
	{
		while (len--)
			*dest++ = *source++;
	}
	else
	{
		dest += len;
		source += len;
		while (len--)
			*(--dest) = *(--source);
	}
	return (dst);
}

/*
#include <stdio.h>

int	main(void)
{
	char			str1[50] = "Hola Mundo";
	char			str2[50] = "Adios Mundo";
	unsigned int	len;

	len = 5;
	printf("Antes de memmove: %s\n", str1);
	ft_memmove(str1, str2, len);
	printf("Después de memmove: %s\n", str1);
	return (0);
}*/
