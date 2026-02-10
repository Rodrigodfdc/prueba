/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:53:33 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/01 18:53:35 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** FUNCION: ft_lstdelone
** -----------------
** Libera la memoria del contenido de un elemento de la lista enlazada y
** libera el propio elemento.
**
** PARAMETROS:
** - t_list *lst: Puntero al elemento a liberar.
** - void (*del)(void *): Función para liberar el contenido del elemento.
**
** RETORNO:
** - Ninguno.
**
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}