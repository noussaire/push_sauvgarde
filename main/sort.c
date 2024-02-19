/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:33:44 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/19 15:00:49 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heiders/push_swap.h"

int	*copy_stack(int *stack, int numbers)
{
	int	i;
	int	*tab;

	i = 0;
	tab = malloc(sizeof(int) * numbers);
	while (i < numbers)
	{
		tab[i] = stack[i];
		i++;
	}
	return (tab);
}

void	plus_petite_number(int *counter, int *stack_a_copy, int *tab, int i)
{
	int	j;
	int	var;
	int	position;

	position = 0;
	j = 0;
	var = stack_a_copy[0];
	while (j < *counter)
	{
		if (var > stack_a_copy[j])
		{
			var = stack_a_copy[j];
			position = j;
		}
		j++;
	}
	tab[i] = var;
	var = stack_a_copy[*counter - 1];
	stack_a_copy[*counter - 1] = stack_a_copy[position];
	stack_a_copy[position] = var;
}

int	*sort_list(t_data *information)
{
	int	counter;
	int	*tab;
	int	*stack_a_copy;
	int	i;

	counter = information->total_numbers;
	tab = malloc(sizeof(int) * information->total_numbers);
	stack_a_copy = copy_stack(information->stack_a, information->total_numbers);
	i = 0;
	while (i < information->total_numbers)
	{
		plus_petite_number(&counter, stack_a_copy, tab, i);
		counter--;
		i++;
	}
	free(stack_a_copy);
	return (tab);
}
