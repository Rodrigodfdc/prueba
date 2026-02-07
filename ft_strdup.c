/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:57:42 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/07 19:21:06 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*original;
	char	*copia;

	original = "Campus 42";
	// Usamos tu función
	copia = ft_strdup(original);
	if (!copia)
		return (1);
	printf("Original: %s en la dirección %p\n", original, original);
	printf("Copia  %s en la dirección %p\n", copia, copia);
	free(copia);
	return (0);
}
*/