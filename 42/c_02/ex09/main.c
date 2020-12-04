/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glymbero <glymbero@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 05:05:45 by glymbero          #+#    #+#             */
/*   Updated: 2020/12/02 17:54:25 by glymbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str);

int    main(void)
{
    char str[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

    
   ft_strcapitalize(str);
   printf("str = %s", str);
   return(0);
}


