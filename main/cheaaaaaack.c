/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheaaaaaack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:59:22 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/19 14:33:55 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heiders/push_swap.h"

static int	if_number_is_max_or_min_tow(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if (ft_atoi(argv[i]) > 2147483647 || ft_atoi(argv[i]) < -2147483648)
			return (1);
		i++;
	}
	return (0);
}

int	if_there_is_no_number_tow(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if (cheacke_int(argv[i]) == 1)
			return (1);
		if (if_number_is_max_or_min_tow(argc, argv) == 1)
			return (1);
		i++;
	}
	return (0);
}

int	check_format_two(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i] && i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == 32)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
