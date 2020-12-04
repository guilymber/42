/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glymbero <glymbero@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 04:30:41 by glymbero          #+#    #+#             */
/*   Updated: 2020/12/02 16:43:13 by glymbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str);

int    main(void)
{
    char str[] = "8879";

    
   ft_str_is_numeric(str);
   printf("str = %d",ft_str_is_numeric(str));
   return(0);
}
