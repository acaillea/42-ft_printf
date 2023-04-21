/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:50:35 by acaillea          #+#    #+#             */
/*   Updated: 2022/07/29 01:50:52 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_len_un_int(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	if (n < 0)
		return (1);
	if (n > 4294967295)
		return (10);
	while (n > 0 && n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_len_int(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}
