/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 22:03:14 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/08/09 22:54:06 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	letter(char c)
{
	
}

int ft_printf(char *str, ...)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str[i] != "\0")
	{
		if (str[i] == '%')
		{
			i++;
			j += letter(str[i]);
		}
		else
			j += write (1, str[i], 1);
		i++;
	}
	return (j);
}

printf("HOLA % QUE TAL%s %s", "hola", "mundo")