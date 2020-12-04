/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpassos- <gpassos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 19:17:46 by gpassos-          #+#    #+#             */
/*   Updated: 2020/11/29 19:48:06 by gpassos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_all_diferent(int *zeros);
int		check_all_dif_zeros(int a, int b, int c, int d);
int		checkline(int a, int b, int c, int d);
int		check(int *params, int *tab, int *m);
int		check_row1left(int *params, int *tab);
int		check_row2left(int *params, int *tab);
int		check_row3left(int *params, int *tab);
int		check_row4left(int *params, int *tab);
int		check_col1up(int *params, int *tab);
int		check_col2up(int *params, int *tab);
int		check_col3up(int *params, int *tab);
int		check_col4up(int *params, int *tab);
int		check_row1right(int *params, int *tab);
int		check_row2right(int *params, int *tab);
int		check_row3right(int *params, int *tab);
int		check_row4right(int *params, int *tab);
int		check_col1down(int *params, int *tab);
int		check_col2down(int *params, int *tab);
int		check_col3down(int *params, int *tab);
int		check_col4down(int *params, int *tab);

int		check_col3down(int *params, int *tab)
{
	int *m;

	m = (int *)malloc(sizeof(int) * 5);
	m[0] = 14;
	m[1] = 10;
	m[2] = 6;
	m[3] = 2;
	m[4] = 6;
	return (check(params, tab, m));
}

int		check_col4down(int *params, int *tab)
{
	int *m;

	m = (int *)malloc(sizeof(int) * 5);
	m[0] = 15;
	m[1] = 11;
	m[2] = 7;
	m[3] = 3;
	m[4] = 7;
	return (check(params, tab, m));
}

int		check_find(int *params, int *tab)
{
	int saida;

	saida = 0;
	saida = saida || (check_row1left(params, tab) == 0);
	saida = saida || (check_row1left(params, tab) == 0);
	saida = saida || (check_row2left(params, tab) == 0);
	saida = saida || (check_row3left(params, tab) == 0);
	saida = saida || (check_row4left(params, tab) == 0);
	saida = saida || (check_col1up(params, tab) == 0);
	saida = saida || (check_col2up(params, tab) == 0);
	saida = saida || (check_col3up(params, tab) == 0);
	saida = saida || (check_col4up(params, tab) == 0);
	saida = saida || (check_row1right(params, tab) == 0);
	saida = saida || (check_row2right(params, tab) == 0);
	saida = saida || (check_row3right(params, tab) == 0);
	saida = saida || (check_row4right(params, tab) == 0);
	saida = saida || (check_col1down(params, tab) == 0);
	saida = saida || (check_col2down(params, tab) == 0);
	saida = saida || (check_col3down(params, tab) == 0);
	saida = saida || (check_col4down(params, tab) == 0);
	return (saida);
}
