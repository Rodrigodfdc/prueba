/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:59:30 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/10 19:36:08 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	const char	str1[] = "Hello";
	const char	str2[] = "Hello, World!";
	int			n;
	int			result;

	n = 5;
	result = ft_strncmp(str1, str2, n);
	if (result == 0)
		printf("Los primeros %d caracteres son iguales\n", n);
	else
		printf("The first %d characters are not equal.\n", n);
	return (0);
}
*/