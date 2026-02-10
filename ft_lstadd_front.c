/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:53:05 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/10 19:45:26 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*
int	main(void)
{
	t_list	*lista;
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*aux;

	lista = NULL; // El primer valor de la lista es NULL
	// 1. Creamos el primer nodo
	nodo1 = ft_lstnew("Soy Jonathan (el primero)");
	// Lo añadimos a la lista
	ft_lstadd_front(&lista, nodo1);
	// 2. Creamos el segundo nodo
	nodo2 = ft_lstnew("Soy Joseph (el segundo)");
	// Lo añadimos delante. Ahora la lista debería empezar por el nodo 2.
	ft_lstadd_front(&lista, nodo2);
	// 3. Vamos a recorrer la lista para ver el orden
	printf("Recorremos la lista\n");
	aux = lista;
	while (aux)
	{
		printf("Contenido: %s\n", (char *)aux->content);
		aux = aux->next; // Saltamos al siguiente nodo
	}
	// 4. Limpieza (Liberamos los nodos que creamos con malloc)
	free(nodo1);
	free(nodo2);
	return (0);
}
*/