/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glymbero <glymbero@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:21:37 by glymbero          #+#    #+#             */
/*   Updated: 2020/12/01 14:58:57 by glymbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int *a;
	int *b;
	int n1;
	int n2;

	n1 = 10;
	n2 = 3;
	a = &n1;
	b = &n2;
	
	ft_ultimate_div_mod(a, b);
	printf("valor a %d \n valor de b %d\n", *a, *b);

	return(0);	
	
}