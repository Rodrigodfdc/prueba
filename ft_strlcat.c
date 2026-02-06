/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:58:07 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/06 20:43:28 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	count_1;
	size_t	count_2;

	count_1 = 0;
	count_2 = 0;
	while (dest[count_1] != '\0' && count_1 < size)
		count_1++;
	while (src[count_2] != '\0' && count_1 + count_2 + 1 < size)
	{
		dest[count_1 + count_2] = src[count_2];
		count_2++;
	}
	if (count_1 < size)
		dest[count_1 + count_2] = '\0';
	while (src[count_2] != '\0')
		count_2++;
	return (count_1 + count_2);
}

/*
#include <stdio.h>

int	main(void)
{
	char			dest[20] = "Hello";
	const char		src[] = " World!";
	unsigned int	size;

	size = 10;
	printf("Antes de strlcat: %s\n", dest);
	ft_strlcat(dest, src, size);
	printf("Despues de strlcat: %s\n", dest);
	return (0);
}
*/