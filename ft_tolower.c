/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 19:00:15 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/10 19:36:18 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	int	i;

	i = 'A';
	printf("Antes del ft_tolower %c\n", i);
	i = ft_tolower(i);
	printf("Después del ft_tolower %c \n", i);
	return (0);
}
*/