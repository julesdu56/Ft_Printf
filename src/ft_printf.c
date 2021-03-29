/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julio <julio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 15:41:41 by jumourot          #+#    #+#             */
/*   Updated: 2021/03/03 10:41:32 by julio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_prinft.h"
#include <stdarg> 

int		ft_printf(const char *src, ...)
{
	char	tableauConversion[9]; {'d', 'c', 's' ...}
	void	(*tableauFonction[9]) (va_list *) = 
	
	tableauConversion = 
	tableauFonction = 
	va_list arg_list;
	int i;
	int tmp;

	va_start(va_arg, src);
	i = 0;

	while (src[i])
	{
		if (src[i] == '%')
		{
			tmp = find_index(tableauConversion, src[i + 1]);			// fonction qui va stocker etre stocker la conversion a l'index de i + 1; 
			if (tmp != -1)
																		// fonction qui va me sortir un resultat de tabfonction , et qui va me sortir l'index de la liste
		}
		else if (src[i] != '%')
			write(1, &src[i] + 1);
	i++;
	}
	return (0);
}