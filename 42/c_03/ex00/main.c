/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glymbero <glymbero@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 20:14:33 by glymbero          #+#    #+#             */
/*   Updated: 2020/12/04 01:45:19 by glymbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char s1[] = " ";
	char s2[] = "";
	

	printf("valor S1 original %d\n", strcmp(&s1[0], &s2[0]));	
	printf("valor S1 %d\n", ft_strcmp(&s1[0], &s2[0]));	
	return (0);
}