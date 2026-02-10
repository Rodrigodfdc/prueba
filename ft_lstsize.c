/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:54:15 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/01 18:54:16 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*
int	main(void)
{
	t_list	*lista;
	int		tamano;

	// 1. Creamos dos nodos con cualquier contenido
	lista = ft_lstnew("Jonathan");
	lista->next = ft_lstnew("Giorno");

	// 2. Llamamos a tu función
	tamano = ft_lstsize(lista);

	// 3. Imprimimos el resultado
	printf("La lista tiene %d nodos.\n", tamano);

	return (0);
}
*/