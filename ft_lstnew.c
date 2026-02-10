/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:54:03 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/10 19:34:05 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*
int	main(void)
{
	t_list	*nodo;
	char	*contenido;

	contenido = "Jonatham, Joseph, Jotaro, Josuke, Giorno, Jolyne";
	// 1. Creamos el nodo
	nodo = ft_lstnew(contenido);
	// 2. Verificamos si la asignación falló
	if (!nodo)
	{
		printf("Error: No se pudo asignar memoria para el nodo.\n");
		return (1);
	}
	// 3. Imprimimos los valores para comprobar
	printf("--- Test ft_lstnew ---\n");
	printf("Contenido del nodo: %s\n", (char *)nodo->content);
	// Verificamos que 'next' sea NULL (es vital para evitar saltos al vacío)
	if (nodo->next == NULL)
		printf("Siguiente nodo: NULL (Correcto)\n");
	else
		printf("Siguiente nodo: ERROR (No es NULL)\n");
	// 4. Liberamos la memoria (importante para evitar leaks)
	free(nodo);
	return (0);
}
*/