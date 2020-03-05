/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treatement.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumourot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 11:04:11 by jumourot          #+#    #+#             */
/*   Updated: 2020/03/05 14:17:17 by jumourot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void		ft_initialize(t_flags flags)
{
	flags->width = 0;
	flags->neg = 0;
	flags->star = 0;
	flags->zero = 0;
	flags->prec = 0;
}

int         ft_is_flags(int c)
{
    if ((c == '-') || (c == ' ') || (c == '0') || (c == '.') || (c == '*'))
        return (1);
	return (0);
}

int         ft_is_types(int c)
{
    if ((c == 'c') || (c == 's') || (c == 'p') || (c == 'd') || (c == 'i')
            || (c == 'u') || (c == 'x') || (c == 'X') || (c == '%'))
        return (1);
	return (0);
}

int         ft_traitement( )
{
	
	return (1);
}
