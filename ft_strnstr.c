/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:59:48 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/01 18:59:49 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *str2, size_t len)
{
	size_t	i;
	size_t	j;

	if (*str2 == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == str2[j] && (i + j) < len)
		{
			if (!str2[j + 1])
				return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}


#include <stdio.h>

int	main(void)
{
	char	str1[] = "vendo opel corsa";
	char	str2[] = "opel";
	int		len;
	char	*result;

	len = 12;
	result = ft_strnstr(str1, str2, len);
	if (result)
		printf("Encontrado!!: %s\n", result);
	else
		printf("No encontrado!!!\n");
	return (0);
}
