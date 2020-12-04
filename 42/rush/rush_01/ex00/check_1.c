/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpassos- <gpassos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 19:17:46 by gpassos-          #+#    #+#             */
/*   Updated: 2020/11/29 19:33:35 by gpassos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_all_diferent(int *zeros);
int		check_all_dif_zeros(int a, int b, int c, int d);
int		checkline(int a, int b, int c, int d);
int		check(int *params, int *tab, int *m);

int		check(int *params, int *tab, int *m)
{
	int saida;

	saida = check_all_dif_zeros(tab[m[0]], tab[m[1]], tab[m[2]], tab[m[3]]);
	if (saida == 0)
	{
		return (0);
	}
	saida = checkline(tab[m[0]], tab[m[1]], tab[m[2]], tab[m[3]]);
	if (saida == -1)
	{
		return (1);
	}
	if (saida == *(params + m[4]))
		return (1);
	else
		return (0);
}

int		check_row1left(int *params, int *tab)
{
	int *m;

	m = (int *)malloc(sizeof(int) * 5);
	m[0] = 0;
	m[1] = 1;
	m[2] = 2;
	m[3] = 3;
	m[4] = 8;
	return (check(params, tab, m));
}

int		check_row2left(int *params, int *tab)
{
	int *m;

	m = (int *)malloc(sizeof(int) * 5);
	m[0] = 4;
	m[1] = 5;
	m[2] = 6;
	m[3] = 7;
	m[4] = 9;
	return (check(params, tab, m));
}

int		check_row3left(int *params, int *tab)
{
	int *m;

	m = (int *)malloc(sizeof(int) * 5);
	m[0] = 8;
	m[1] = 9;
	m[2] = 10;
	m[3] = 11;
	m[4] = 10;
	return (check(params, tab, m));
}

int		check_row4left(int *params, int *tab)
{
	int *m;

	m = (int *)malloc(sizeof(int) * 5);
	m[0] = 12;
	m[1] = 13;
	m[2] = 14;
	m[3] = 15;
	m[4] = 11;
	return (check(params, tab, m));
}
