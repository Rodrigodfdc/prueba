/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:48:37 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/01 18:48:40 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < len)
	{
		ptr[i] = 0;
		i++;
	}
	return (s);
}


#include <stdio.h>

int	main(void)
{
	char	str[50] = "Hello World!";

	printf("Antes de bzero: %s\n", str);
	ft_bzero(str, 5);
	printf("Despues de bzero: %s\n", str);
	return (0);
}
