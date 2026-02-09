/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:57:16 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/01 18:57:17 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (fd < 0 || !s)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

/*
int	main(void)
{
	char	*str;

	int fd = 1; // Salida estándar
	str = "Jotnathan, Joseph, Jotaro, Josuke, Giorno, Jolyne'\n'";
	ft_putstr_fd(str, fd);
	return (0);
}
*/