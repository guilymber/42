/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glymbero <glymbero@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 13:50:55 by glymbero          #+#    #+#             */
/*   Updated: 2020/11/30 21:32:51 by glymbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int a;
	int b;
	
	a = 10;
	b = 42;
	
	printf("valor de A %d\n", a);
	printf("valor de B %d\n", b);
	ft_swap(&a, &b);
	printf("valor de A %d\n", a);
	printf("valor de B %d\n", b);
}