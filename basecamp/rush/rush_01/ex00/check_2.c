/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpassos- <gpassos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 19:17:46 by gpassos-          #+#    #+#             */
/*   Updated: 2020/11/29 19:33:53 by gpassos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_all_diferent(int *zeros);
int		check_all_dif_zeros(int a, int b, int c, int d);
int		checkline(int a, int b, int c, int d);

int		check(int *params, int *tab, int *m);

int		check_col1up(int *params, int *tab)
{
	int *m;

	m = (int *)malloc(sizeof(int) * 5);
	m[0] = 0;
	m[1] = 4;
	m[2] = 8;
	m[3] = 12;
	m[4] = 0;
	return (check(params, tab, m));
}

int		check_col2up(int *params, int *tab)
{
	int *m;

	m = (int *)malloc(sizeof(int) * 5);
	m[0] = 1;
	m[1] = 5;
	m[2] = 9;
	m[3] = 13;
	m[4] = 1;
	return (check(params, tab, m));
}

int		check_col3up(int *params, int *tab)
{
	int *m;

	m = (int *)malloc(sizeof(int) * 5);
	m[0] = 2;
	m[1] = 6;
	m[2] = 10;
	m[3] = 14;
	m[4] = 2;
	return (check(params, tab, m));
}

int		check_col4up(int *params, int *tab)
{
	int *m;

	m = (int *)malloc(sizeof(int) * 5);
	m[0] = 3;
	m[1] = 7;
	m[2] = 11;
	m[3] = 15;
	m[4] = 3;
	return (check(params, tab, m));
}

int		check_row1right(int *params, int *tab)
{
	int *m;

	m = (int *)malloc(sizeof(int) * 5);
	m[0] = 3;
	m[1] = 2;
	m[2] = 1;
	m[3] = 0;
	m[4] = 12;
	return (check(params, tab, m));
}
