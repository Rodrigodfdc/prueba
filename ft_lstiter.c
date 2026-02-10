/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:53:41 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/10 19:54:54 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** FUNCION: ft_lstiter
** -----------------
** Aplica la función f a cada elemento de la lista enlazada lst.
**
** PARAMETROS:
** - t_list *lst: Puntero a la lista enlazada.
** - void (*f)(void *): Función a aplicar a cada elemento.
**
** RETORNO:
** - Ninguno.
**
*//*
** FUNCTION: ft_lstiter
** -------------------
** Applies the function f to each element of the linked list lst.
**
** PARAMETERS:
** - t_list *lst: Pointer to the linked list.
** - void (*f)(void *): Function to apply to each element.
**
** RETURN:
** - None.
**
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
