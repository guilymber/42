/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpassos- <gpassos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 19:17:46 by gpassos-          #+#    #+#             */
/*   Updated: 2020/11/29 19:33:59 by gpassos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_all_diferent(int *zeros);
int		check_all_dif_zeros(int a, int b, int c, int d);
int		checkline(int a, int b, int c, int d);

int		check(int *params, int *tab, int *m);

int		check_row2right(int *params, int *tab)
{
	int *m;

	m = (int *)malloc(sizeof(int) * 5);
	m[0] = 7;
	m[1] = 6;
	m[2] = 5;
	m[3] = 4;
	m[4] = 13;
	return (check(params, tab, m));
}

int		check_row3right(int *params, int *tab)
{
	int *m;

	m = (int *)malloc(sizeof(int) * 5);
	m[0] = 11;
	m[1] = 10;
	m[2] = 9;
	m[3] = 8;
	m[4] = 14;
	return (check(params, tab, m));
}

int		check_row4right(int *params, int *tab)
{
	int *m;

	m = (int *)malloc(sizeof(int) * 5);
	m[0] = 15;
	m[1] = 14;
	m[2] = 13;
	m[3] = 12;
	m[4] = 15;
	return (check(params, tab, m));
}

int		check_col1down(int *params, int *tab)
{
	int *m;

	m = (int *)malloc(sizeof(int) * 5);
	m[0] = 12;
	m[1] = 8;
	m[2] = 4;
	m[3] = 0;
	m[4] = 4;
	return (check(params, tab, m));
}

int		check_col2down(int *params, int *tab)
{
	int *m;

	m = (int *)malloc(sizeof(int) * 5);
	m[0] = 13;
	m[1] = 9;
	m[2] = 5;
	m[3] = 1;
	m[4] = 5;
	return (check(params, tab, m));
}
