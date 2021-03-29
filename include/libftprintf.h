/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumourot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 13:46:11 by jumourot          #+#    #+#             */
/*   Updated: 2020/03/04 15:08:20 by jumourot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>

typedef struct  s_flags
{
    int         width;
    int         neg;
    int         star;
    int         zero;
    int         prec;
}               t_flags;

#endif
