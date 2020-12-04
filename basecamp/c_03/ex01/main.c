/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glymbero <glymbero@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 20:14:33 by glymbero          #+#    #+#             */
/*   Updated: 2020/12/04 03:40:23 by glymbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{				 
	char s1[] = "ABA";
	char s2[] = "ABZ";
	unsigned int n;
	n = 0;
	

	printf("valor S1 original %d\n", strncmp(&s1[0], &s2[0], n));	
	printf("valor S1 %d\n", ft_strncmp(&s1[0], &s2[0], n));	
	return (0);
}

//ABC ABC =0	OK
//ABC AB       # 'C' é ASCII 67; 'C' - '' = 67 OK
//ABA ABZ      # 'A' é ASCII 65; 'Z' é ASCII 90 = -25
//ABJ ABC = 7