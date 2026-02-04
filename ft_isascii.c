/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:51:01 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/01 18:51:09 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
#include <stdio.h>

int	main(void)
{
	int c = 65; // ASCII para el valor 'A'
	if (ft_isascii(c))
		printf("%c Es un caracter ascii\n", c);
	else
		printf("%c No es un caracter ascii\n", c);
	c = 128; // fuera del rango de caracter ascii
	if (ft_isascii(c))
		printf("%c Es un caracter ascii\n", c);
	else
		printf("%c No es un caracter ascii\n", c);
	return (0);
}
*/