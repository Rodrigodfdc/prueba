/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:48:54 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/07 20:03:25 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*
#include <stdio.h>

int	main(void)
{
	int	*ptr;
	int	i;

	ptr = ft_calloc(5, sizeof(int));
	if (!ptr)
		return (1);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ptr[i]);
	}
	free(ptr);
	return (0);
}
*/