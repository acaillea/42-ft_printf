/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:05:21 by acaillea          #+#    #+#             */
/*   Updated: 2022/07/29 01:50:54 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_print_c(int len, char arg)
{
	ft_putchar(arg);
	len++;
	return (len);
}

int	ft_print_str(int len, char *arg)
{
	int	i;

	i = 0;
	if (!arg)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (arg[i])
	{
		ft_putchar(arg[i]);
		len++;
		i++;
	}
	return (len);
}
