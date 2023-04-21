/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:49:30 by acaillea          #+#    #+#             */
/*   Updated: 2021/10/18 17:49:35 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c);
void	ft_putn(int n);
void	ft_putun_n(unsigned int n);

int		ft_put_maj_hex(unsigned long n);
int		ft_put_min_hex(unsigned long n);

int		ft_len_int(int n);
int		ft_len_un_int(unsigned int n);
int		ft_len_hex(unsigned long n);

int		ft_print_c(int len, char arg);
int		ft_print_str(int len, char *arg);
int		ft_print_int(int len, int arg);
int		ft_print_un_int(int len, unsigned long arg);
int		ft_print_hex(int len, char c, unsigned long arg);
int		ft_print_p(int len, void *arg);

int		ft_which(char c, va_list ap);
int		ft_printf(const char *str, ...);

#endif