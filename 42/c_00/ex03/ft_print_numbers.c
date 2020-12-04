/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glymbero <glymbero@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:45:38 by glymbero          #+#    #+#             */
/*   Updated: 2020/11/25 18:48:02 by glymbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char start;
	char end;

	start = 48;
	end = 57;
	while (start <= end)
	{
		write(1, &start, 1);
		start++;
	}
}
