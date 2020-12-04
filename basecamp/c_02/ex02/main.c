/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glymbero <glymbero@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 02:11:23 by glymbero          #+#    #+#             */
/*   Updated: 2020/12/02 16:41:50 by glymbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str);

int    main(void)
{
    char str[] = "jdhh";

   ft_str_is_alpha(str);
   printf("str = %d",ft_str_is_alpha(str));
   return(0);
}