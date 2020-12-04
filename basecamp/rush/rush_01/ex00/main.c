/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpassos- <gpassos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 18:15:43 by gpassos-          #+#    #+#             */
/*   Updated: 2020/11/29 20:10:24 by gpassos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	print_grid(int *tab);
int		set_params(int *params, char *str);
void	init_tab(int *tab);
int		solve(int *params, int *tab);

int		main(int argc, char **argv)
{
	int *grid;
	int *params;

	grid = (int *)malloc(sizeof(int) * 16);
	if (argc > 1)
	{
		params = (int *)malloc(sizeof(int) * 16);
		if (set_params(params, argv[1]) == -1)
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	else
		return (0);
	init_tab(grid);
	if (solve(params, grid) != 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	print_grid(grid);
	free(grid);
	free(params);
	return (0);
}
