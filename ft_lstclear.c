/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:53:15 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/01 18:53:16 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** FUNCION: ft_lstclear
** -----------------
** Libera la memoria de todos los elementos de la lista enlazada y
** establece el puntero a la lista en NULL.
**
** PARAMETROS:
** - t_list **lst: Doble puntero a la lista enlazada.
** - void (*del)(void *): Función para liberar el contenido de cada elemento.
**
** RETORNO:
** - Ninguno.
**
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}