/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glymbero <glymbero@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 03:22:56 by glymbero          #+#    #+#             */
/*   Updated: 2020/11/23 23:10:21 by glymbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int 
void	rush(int x, int y)
{
	int	l;
	int	c;

	l = 1;
	while (l <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((c == 1 || c == x) && (l == 1))
				ft_putchar('A');
			else if ((c == 1 || c == x) && (l == y))
				ft_putchar('C');
			else if (l == 1 || l == y || c == 1 || c == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		l++;
		ft_putchar('\n');
	}
	ft_putchar('\n');
}
