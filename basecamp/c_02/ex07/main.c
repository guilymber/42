/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glymbero <glymbero@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 05:05:45 by glymbero          #+#    #+#             */
/*   Updated: 2020/12/02 19:21:28 by glymbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str);

int    main(void)
{
    char str[] = "ajhj9898hkh{kz";

    
   ft_strupcase(str);
   printf("str = %s", str);
   return(0);
}


