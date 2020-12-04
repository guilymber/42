/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glymbero <glymbero@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 04:30:41 by glymbero          #+#    #+#             */
/*   Updated: 2020/12/02 16:45:09 by glymbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str);

int    main(void)
{
    char str[] = "JKJKJKL";

    
   ft_str_is_lowercase(str);
   printf("str = %d",ft_str_is_lowercase(str));
   return(0);
}
