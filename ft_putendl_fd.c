/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:55:49 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/01 18:55:51 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (fd < 0 || !s)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}

/*
int	main(void)
{
	char	*str;

	int fd = 1; // Salida estándar
	str = "Jonathan, Joseph, Jotaro, Josuke, Giorno, Jolyne";
	ft_putendl_fd(str, fd);
	return (0);
}
*/