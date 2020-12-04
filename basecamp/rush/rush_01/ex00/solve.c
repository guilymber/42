/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpassos- <gpassos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 19:37:25 by gpassos-          #+#    #+#             */
/*   Updated: 2020/11/29 20:27:13 by gpassos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		check_find(int *params, int *tab);
void	print_grid(int *tab);
int		main_find(int *tab, int *x, int *y);

int		check_all_diferent(int *zeros)
{
	int tester;
	int current;
	int x;
	int y;

	x = 0;
	tester = zeros[x];
	while (tester != -1)
	{
		y = 0;
		current = zeros[y];
		while (current != -1)
		{
			if (x != y)
			{
				if (current == tester)
					return (0);
			}
			y++;
			current = zeros[y];
		}
		x++;
		tester = zeros[x];
	}
	return (1);
}

int		check_all_dif_zeros(int a, int b, int c, int d)
{
	int *zeros;
	int *numbers;
	int index;
	int counter;

	zeros = (int *)malloc(sizeof(int) * 5);
	numbers = (int *)malloc(sizeof(int) * 4);
	numbers[0] = a;
	numbers[1] = b;
	numbers[2] = c;
	numbers[3] = d;
	index = 0;
	counter = 0;
	while (counter < 4)
	{
		if (numbers[counter] != 0)
		{
			zeros[index] = numbers[counter];
			index++;
		}
		counter++;
	}
	zeros[index] = -1;
	return (check_all_diferent(zeros));
}

int		checkline(int a, int b, int c, int d)
{
	int biggest;
	int counter;

	if (a == 0 || b == 0 || c == 0 || d == 0)
	{
		return (-1);
	}
	counter = 1;
	biggest = a;
	if (b > biggest)
	{
		biggest = b;
		counter++;
	}
	if (c > biggest)
	{
		biggest = c;
		counter++;
	}
	if (d > biggest)
	{
		biggest = d;
		counter++;
	}
	return (counter);
}

int		find(int *params, int *tab)
{
	int x;
	int y;

	x = 0;
	while (x < 16)
	{
		y = 1;
		while (y <= 4)
		{
			*(tab + x) = y;
			if (check_find(params, tab))
			{
				if (main_find(tab, &x, &y) == -1)
					return (-1);
			}
			else
				break ;
		}
		x++;
	}
	return (0);
}

int		solve(int *params, int *tab)
{
	return (find(params, tab));
}
