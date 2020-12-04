/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glymbero <glymbero@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 04:30:41 by glymbero          #+#    #+#             */
/*   Updated: 2020/12/02 21:17:51 by glymbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str);

int    main(void)
{
    char str[] = "OIOIOI";

    
   ft_str_is_uppercase(str);
   printf("str = %d",ft_str_is_uppercase(str));
   return(0);
}
