/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_traitement_char.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumourot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 13:49:34 by jumourot          #+#    #+#             */
/*   Updated: 2020/03/02 17:19:44 by jumourot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int			ft_putchar(const char c)
{
	write(1, &c, 1);
	return (1);
}

int			ft_putchar_width(int c, int width)
{
	int 	i;

	i = 0;
	while (++i < width)
		ft_putchar(' ');
	ft_putchar(c);
	return (1);
}

int			ft_putchar_width_prec(int c, int width)
{
	int		i;

	i = 0;
	while (i < width)
		i++;
	ft_putchar(c);
	return (1);
}

int			ft_putchar_zero(int c, int zero)
{
	int		i;
	
	i = 0;
	while (++i < zero)
		ft_putchar('0');
	ft_putchar(c);
	return (1);
}

int			ft_printf_char(int c, const char *s)
{	
	int		i;

	return (1);
}

int			main()
{
	return (0);
}
