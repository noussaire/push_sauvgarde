/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_cheack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:33:44 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/16 18:16:04 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heiders/push_swap.h"

int	check_format(int argc, char **argv)
{
	int	i;

	if (argc != 2)
		return (0);
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == 32)
			return (1);
		i++;
	}
	return (0);
}

int	check_if__all_is_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != 32)
			return (0);
		i++;
	}
	return (1);
}

char	**handle_arguments_format(char **argv)
{
	if (check_if__all_is_space(argv[1]) == 1)
		return (NULL);
	return (ft_split(argv[1], ' '));
}

// int	ft_strlen_tab(char **argv)
// {
// 	int i;

// 	i = 0;
// 	while (argv[i] != '\0')
// 	{
// 		printf("dkhlt\n");
// 		i++;
// 	}
// 	return (i);
// }