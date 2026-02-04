/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:52:30 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/01 18:52:31 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(unsigned int c)
{
	return (c >= 32 && c <= 126);
}

/*
#include <stdio.h>

int	main(void)
{
	int c = 65; // ASCII value for 'A'
	if (ft_isprint(c))
		printf("%c Es un caracter imprimible\n", c);
	else
		printf("%c No es un caracter imprimible\n", c);
	c = 31; // Non-printable value
	if (ft_isprint(c))
		printf("%c Es un caracter imprimible\n", c);
	else
		printf("%c No es un caracter imprimible\n", c);
	return (0);
}
*/