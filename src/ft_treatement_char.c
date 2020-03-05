/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treatement_char.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumourot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 11:04:19 by jumourot          #+#    #+#             */
/*   Updated: 2020/03/05 11:04:21 by jumourot         ###   ########.fr       */
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
	return (width);
}

int			ft_putchar_width_neg(int c, int width)
{
	int		i;

	ft_putchar(c);
	i = 1;
	while (i < len)
		i++;
	return (width);
}

int			ft_putchar_zero(int c, int width)
{
	int		i;
	
	i = 0;
	while (++i < zero || c != '\0')
		ft_putchar('0');
	ft_putchar(c);
	return (width);
}

int			ft_print_char(const char c, t_flags flags)
{
	if (flags.width == 0 && flags.neg == 1)
		return (ft_putchar_width_neg(c, width));
	if else (flags.width == 0 && flags.zero == 1)
		return (ft_putchar_zero(c, width));
	if else (flags.width == 1)
		return (ft_putchar_width(c, width));
	else
		ft_putchar(c);
}
