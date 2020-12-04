/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glymbero <glymbero@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 20:20:39 by glymbero          #+#    #+#             */
/*   Updated: 2020/11/25 21:37:54 by glymbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char reverse_a;

	reverse_a = 'z';
	while (reverse_a >= 'a')
	{
		write(1, &reverse_a, 1);
		reverse_a--;
	}
}
