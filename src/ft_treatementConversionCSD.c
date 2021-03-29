/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treatementConversionCSD.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julio <julio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 14:50:39 by julio             #+#    #+#             */
/*   Updated: 2021/03/15 13:55:31 by julio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdarg>
#include "libftprintf.h"
#include "libft.h"

void    char_fonction(va_list *arg_list)
{
        char c;

        c = va_arg(*arg_list, int)
        write(1, &c, 1);
}

void    str_fonction(va_list *arg_list)
{
        char *str;

        str = va_arg(*arg_list, char *);
        ft_putstr(str);
}

void    nbr_fonction(va_list *arg_list)
{
        int nbr;

        nbr = va_argv(arg_list, int)
        ft_putnbr(nbr);
}