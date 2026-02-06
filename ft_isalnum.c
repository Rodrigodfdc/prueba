/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:49:06 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/06 18:48:08 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(unsigned int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a'
			&& c <= 'z'))
		return (1);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	int	c;

	c = 'A';
	if (ft_isalnum(c))
		printf("%c Es alfanumérico\n", c);
	else
		printf("%c No es alfanumérico\n", c);
	c = '1';
	if (ft_isalnum(c))
		printf("%c Es alfanumérico\n", c);
	else
		printf("%c No es alfanumérico\n", c);
	c = '#';
	if (ft_isalnum(c))
		printf("%c Es alfanumérico\n", c);
	else
		printf("%c NO es alfanumérico\n", c);
	return (0);
}
*/