/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_argv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:59:22 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/17 14:53:50 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heiders/push_swap.h"

int count_num(char *s, char espace)
{
    int nb_strings = 0;
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] != espace)
        {
            while (s[i] != '\0' && s[i] != espace)
                i++;
            nb_strings++;
        }
        if (s[i])
            i++;
    }
    return nb_strings;
}

int	lent(int ac, char **argv)
{
	int	i;
	int	k;
	int	nb;

	i = 1;
	k = 0;
	while (i < ac)
	{
		nb = count_num(argv[i], 32);
		k = k + nb;
		i++;
	}
	return (k);
}

char	**join_argv(int argc, char **argv)
{
	int		i;
	int		j;
	char	**join;
	char	**tab;
	int		k;

	i = 1;
	j = 0;
	join = malloc(sizeof(char *) * (lent(argc, argv) + 1));
	while (i < argc)
	{
		if (check_if__all_is_space(argv[i]) == 1)
			return (NULL);
		tab = ft_split(argv[i], ' ');
		if (tab)
		{
			k = 0;
			while (tab[k] != NULL)
			{
				join[j] = tab[k];
				j++;
				k++;
			}
			free(tab);
		}
		i++;
	}
	join[j] = NULL;
	return (join);
}
