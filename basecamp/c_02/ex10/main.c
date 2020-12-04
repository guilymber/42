/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glymbero <glymbero@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 18:36:52 by glymbero          #+#    #+#             */
/*   Updated: 2020/12/02 01:22:04 by glymbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int		main(void)
{
	char src[] = "Valeu";
	char dest[] = "        ";
	
	ft_strcpy(dest, src);
	printf("valor dest %s \nvalor src %s\n", dest, src);
	return(0);
}