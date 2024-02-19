/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:59:22 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/19 14:38:02 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heiders/push_swap.h"

static int	already_sorting(t_data *information)
{
	int	i;

	i = 0;
	while (i < information->total_numbers)
	{
		if (information->list_sorted[i] != information->stack_a[i])
			return (0);
		i++;
	}
	return (1);
}

int	sorted(t_data *information)
{
	if (already_sorting(information) == 1)
		return (1);
	return (0);
}

int	check_if_there_is_double_one(int argc, char **argv)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	j = 0;
	i = 0;
	while (i < argc)
	{
		j = 0;
		count = 0;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				count++;
			j++;
		}
		if (count > 1)
			return (1);
		i++;
	}
	return (0);
}
