/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glymbero <glymbero@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 03:47:31 by glymbero          #+#    #+#             */
/*   Updated: 2020/12/04 16:55:33 by glymbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);


int		main(void)
{
	char src[] = "tudo bem?";
	char dest[] = "oi ";

	ft_strcat(&dest[0], &src[0]);
	printf("Resultado src+dest: %s\n", dest);	
	return (0);
		
}