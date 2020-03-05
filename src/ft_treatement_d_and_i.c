/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treatement_d_and_i.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumourot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 11:04:27 by jumourot          #+#    #+#             */
/*   Updated: 2020/03/05 11:04:29 by jumourot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft/libft.a"

int			ft_putstr(const char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (1);
}

int			ft_putstr_width(const char *str, int width)
{
	while (str[i])
	{
		while (
