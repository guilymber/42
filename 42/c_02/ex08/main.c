/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glymbero <glymbero@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 05:05:45 by glymbero          #+#    #+#             */
/*   Updated: 2020/12/02 16:26:35 by glymbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str);

int    main(void)
{
    char str[] = "HUEH89898UEHEUHE";

    
   ft_strlowcase(str);
   printf("str = %s", str);
   return(0);
}
