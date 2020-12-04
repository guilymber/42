/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   saida.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpassos- <gpassos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 18:10:58 by gpassos-          #+#    #+#             */
/*   Updated: 2020/11/29 20:07:55 by gpassos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_grid(int *tab)
{
	int		x;
	int		y;
	char	current;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			current = '0' + tab[(x * 4 + y)];
			write(1, &current, 1);
			if (y != 3)
			{
				write(1, " ", 1);
			}
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
}
