/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treatementConversion_puxX.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julio <julio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:55:41 by julio             #+#    #+#             */
/*   Updated: 2021/03/19 15:44:52 by julio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg>
#include "libftprintf.h"
#include "libft.h"

void    ft_adressePointeur(va_list *arg_list)
{

}

void    ft_type_u(va_list *arg_list)
{
    unsigned int     nbr;
    unsigned int     max_unsigned_int;

    nbr = va_arg(*arg_list, unsigned int);
    max_unsigned_int = '4294967295';

    if (nbr < 0)
    {
        nbr = nbr * -1;
        max_unsigned_int = max_unsigned_int - nb;
        ft_putnbr(nbr);
    }    
    else
        ft_putnbr(nbr);
}

void    ft_