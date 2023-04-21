/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:48:43 by acaillea          #+#    #+#             */
/*   Updated: 2022/07/29 01:50:56 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_put_maj_hex(unsigned long n)
{
	char	*base;
	int		len;

	base = "0123456789ABCDEF";
	len = ft_len_hex(n);
	if (n >= 16)
		ft_put_maj_hex(n / 16);
	ft_putchar(base[n % 16]);
	return (len);
}

int	ft_put_min_hex(unsigned long n)
{
	char	*base;
	int		len;

	base = "0123456789abcdef";
	len = ft_len_hex(n);
	if (n >= 16)
		ft_put_min_hex(n / 16);
	ft_putchar(base[n % 16]);
	return (len);
}

int	ft_len_hex(unsigned long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		i++;
		n /= 16;
	}
	return (i);
}

/* ****************************************************************** */

int	ft_print_hex(int len, char c, unsigned long arg)
{
	if (c == 'x')
	{
		ft_put_min_hex(arg);
		len = ft_len_hex(arg);
	}
	else if (c == 'X')
	{
		ft_put_maj_hex(arg);
		len = ft_len_hex(arg);
	}
	return (len);
}

/* ****************************************************************** */

int	ft_print_p(int len, void *arg)
{
	unsigned long	tmp;

	if (!arg)
	{
		write(1, "0x0", 3);
		return (3);
	}
	tmp = (long long)arg;
	write(1, "0x", 2);
	len = ft_put_min_hex(tmp) + 2;
	return (len);
}
