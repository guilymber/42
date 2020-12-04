/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glymbero <glymbero@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 20:21:32 by glymbero          #+#    #+#             */
/*   Updated: 2020/12/02 02:08:00 by glymbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	unsigned int n;
	char src[] = "hello 42";
	char dest[] = "ola";
	char srcoriginal[] = "hello 42";
	char destoriginal[] = "ola";
	n = 5;
	
    printf("Essa é frase original: %s", dest);
    printf("\n");
    strncpy(dest,src, n);
    printf("Agora a frase foi alterada pela função: %s", dest);
    printf("\n");


	ft_strncpy(destoriginal, srcoriginal, n);
	printf("valor dest %s\n", destoriginal);
	return(0);
}

