/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:55:33 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/01 18:55:35 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

#include <stdio.h>

int	main(void)
{
	char			str[50] = "Hello World!";
	int				c;
	unsigned int	len;

	c = 'X';
	len = 5;
	printf("Antes de memset: %s\n", str);
	ft_memset(str, c, len);
	printf("Después de memset: %s\n", str);
	return (0);
}
