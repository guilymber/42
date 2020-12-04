/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glymbero <glymbero@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 03:47:31 by glymbero          #+#    #+#             */
/*   Updated: 2020/12/04 17:22:52 by glymbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	unsigned int nb;
	char src[] = "tudo bem?";
	char dest[] = "oi ";
	nb = 13;

	ft_strncat(&dest[0], &src[0], nb);
	printf("Resultado src+dest: %s\n", dest);	
	return (0);
		
}