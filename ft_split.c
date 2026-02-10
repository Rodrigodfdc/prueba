/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:57:23 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/02/10 19:34:29 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static void	ft_free_result(char **result, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static int	ft_fill_result(char **result, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			result[j] = ft_substr(s, start, i - start);
			if (!result[j++])
			{
				ft_free_result(result, j - 1);
				return (0);
			}
		}
	}
	result[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	if (!ft_fill_result(result, s, c))
		return (NULL);
	return (result);
}

/*
int	main(void)
{
	char *str = "-Jonathan --Joseph -Jotaro -Giorno -Jolyne-";

	char delimiter = '-';

	char **result; // donde almacenaré las frases

	int i; // contador

	// hacemos el split y lo metemos dentro de la varibale
	result = ft_split(str, delimiter);

	// si el ft_split falló (malloc), salimos
	if (!result)
		return (i);

	// si todo bien, recorremos el array hsata encontrar un null
	i = 0; // inicializamos el contador

	while (result[i] != NULL)
	{
		printf("Palabra %d: %s\n", i, result[i]);
		i++;
	}

	return (0);
}*/