/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:51:46 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/03 21:09:48 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(unsigned int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	int	c;

	c = '5';
	if (ft_isdigit(c))
		printf("%c Es un dígito\n", c);
	else
		printf("%c No es un digito\n", c);
	c = 'A';
	if (ft_isdigit(c))
		printf("%c Es un digito\n", c);
	else
		printf("%c No es un dígito\n", c);
	c = '#';
	if (ft_isdigit(c))
		printf("%c Es un dígito\n", c);
	else
		printf("%c No es un dígito\n", c);
	return (0);
}
