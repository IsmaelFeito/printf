/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeito-m <ifeito-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 22:03:17 by ifeito-m          #+#    #+#             */
/*   Updated: 2024/08/12 17:30:30 by ifeito-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>
# include <stdarg.h>

int	ft_printf(char *str, ...);
int	letter(char c, va_list vargs);
int	ft_put_hexa(unsigned int n, int upper);
int	ft_put_uns(unsigned int n);
int	ft_putnbr(int n);
int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_put_ptr(void *p);

#endif