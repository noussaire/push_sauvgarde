/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:42:38 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/17 13:37:41 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heiders/libft.h"

static int	words_count(char *s, char c)
{
	int	nb_strings;
	int	i;

	i = 0;
	nb_strings = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != '\0' && s[i] != c)
				i++;
			nb_strings++;
		}
		if (s[i])
			i++;
	}
	return (nb_strings);
}

static char	*insert_cpy(char **ptr, char *str, char c)
{
	int	i;
	int	k;
	int	len;
	int	lop;

	i = 0;
	k = 0;
	len = 0;
	lop = 0;
	while (str[len] == c)
		len++;
	while ((str + len)[k] != c && (str + len)[k] != '\0')
		k++;
	*ptr = malloc((k + 1) * sizeof(char));
	if (*ptr != NULL)
	{
		lop = len;
		while (str[lop] != '\0' && str[lop] != c)
		{
			(*ptr)[i++] = str[lop++];
		}
		(*ptr)[i] = '\0';
		return (str + (k + len));
	}
	return (NULL);
}

static void	free_me(char **tab, int i)
{
	while (i >= 0)
	{
		free(tab[i--]);
	}
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tabs;
	int		i;
	int		count;
	char	*string;

	string = (char *)s;
	if (!string)
		return (NULL);
	i = -1;
	count = words_count(string, c);
	tabs = (char **)malloc(sizeof(char *) * (count + 1));
	if (tabs != NULL)
	{
		tabs[count] = NULL;
		while (++i < count)
		{
			string = insert_cpy(tabs + i, string, c);
			if (string == NULL)
			{
				free_me(tabs, i);
				return (NULL);
			}
		}
	}
	return (tabs);
}
