/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:59:54 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/06 23:00:13 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_occ;

	last_occ = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_occ = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last_occ);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hola mondi";
	char	*result;

	result = ft_strrchr(str, 'o');
	if (result)
		printf("¡¡¡Encontrado!!!: %s\n", result);
	else
		printf("¡¡¡No Encontrado!!!\n");
	return (0);
}
*/