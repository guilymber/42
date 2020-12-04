/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glymbero <glymbero@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 04:58:02 by glymbero          #+#    #+#             */
/*   Updated: 2020/12/02 16:50:35 by glymbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int ft_str_is_printable(char *str);

int    main(void)
{
    char str[] = "✊";

   ft_str_is_printable(str);
   printf("str = %d",ft_str_is_printable(str));
   return(0);
}
