/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:53:57 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/10 19:46:48 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** FUNCION: ft_lstmap
** -----------------
** Crea una nueva lista enlazada aplicando la función f a cada elemento de
** la lista lst. La función del se utiliza para liberar el contenido de los
** elementos en caso de error.
**
** PARAMETROS:
** - t_list *lst: Puntero a la lista enlazada original.
** - void *(*f)(void *): Función a aplicar a cada elemento.
** - void (*del)(void *): Función para liberar el contenido de los
**   elementos en caso de error.
**
** RETORNO:
** - Puntero a la nueva lista enlazada creada.
** - NULL si la reserva de memoria falla o si lst es NULL.
**
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;
	void	*new_content;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_elem = ft_lstnew(new_content);
		if (!new_elem)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}
