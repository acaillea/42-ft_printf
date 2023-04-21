/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:04:26 by acaillea          #+#    #+#             */
/*   Updated: 2022/07/29 01:50:58 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putn(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		if (n == -2147483648)
		{
			write(1, "2147483648", 10);
			return ;
		}
		n *= -1;
	}
	if ((n / 10) != 0)
		ft_putn(n / 10);
	ft_putchar(n % 10 + 48);
}

int	ft_print_int(int len, int arg)
{
	ft_putn(arg);
	len = ft_len_int(arg);
	return (len);
}

/**************************************************************************/

void	ft_putun_n(unsigned int n)
{
	if (n > 9 && n < 4294967295)
	{
		ft_putun_n(n / 10);
		ft_putun_n(n % 10);
	}
	else if (n >= 4294967295)
		write(1, "4294967295", 10);
	else if (n < 0)
		write(1, "0", 1);
	else
		ft_putchar(n % 10 + 48);
}

int	ft_print_un_int(int len, unsigned long arg)
{
	ft_putun_n(arg);
	len = ft_len_un_int(arg);
	return (len);
}
