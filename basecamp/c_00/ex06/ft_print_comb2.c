/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glymbero <glymbero@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 21:41:00 by glymbero          #+#    #+#             */
/*   Updated: 2020/11/26 18:53:26 by glymbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		print_number(int n1, int n2, int n3, int n4)
{
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, " ", 1);
	write(1, &n3, 1);
	write(1, &n4, 1);
	write(1, ", ", 2);
}

void		print_final_number(int n1, int n2, int n3, int n4)
{
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, " ", 1);
	write(1, &n3, 1);
	write(1, &n4, 1);
}

void		while_middle(int n1, int n2, int n3, int n4)
{
	while (n3 <= '9')
	{
		while (n4 <= '9')
		{
			if (n1 == '9' && n2 == '8' && n3 == '9' && n4 == '9')
				print_final_number(n1, n2, n3, n4);
			else
				print_number(n1, n2, n3, n4);
			n4++;
		}
		n3++;
		n4 = '0';
	}
}

void		ft_print_comb2(void)
{
	int n1;
	int n2;
	int n3;
	int n4;

	n1 = '0';
	n2 = '0';
	while (n1 <= '9')
	{
		while (n2 <= '9')
		{
			n3 = n1;
			n4 = n2 + 1;
			while_middle(n1, n2, n3, n4);
			n2++;
		}
		n1++;
		n2 = '0';
	}
}
