/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 19:00:23 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/06 21:03:41 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	int	i;

	i = 'a';
	printf("Variable antes del ft_toupper: %c \n", i);
	i = ft_toupper(i);
	printf("Variable despues del ft_toupper %c \n", i);
	return (0);
}
*/
