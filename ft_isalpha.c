/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:49:22 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/10 19:30:17 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(unsigned int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	int	c;

	c = 'A';
	if (ft_isalpha(c))
		printf("%c Es un caracter alfabetico \n", c);
	else
		printf("%c no es un caracter alfabético\n", c);
	c = '2';
	if (ft_isalpha(c))
		printf("%c Es un caracter alfabetico\n", c);
	else
		printf("%c no es un caracter alfabétio\n", c);
	c = '#';
	if (ft_isalpha(c))
		printf("%c Es un caracter alfabético\n", c);
	else
		printf("%c No es un caracter alfabético\n", c);
	return (0);
}
*/