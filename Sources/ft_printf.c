/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:23:08 by acaillea          #+#    #+#             */
/*   Updated: 2022/07/29 01:54:22 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_which(char c, va_list ap)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_print_c(len, va_arg(ap, int ));
	else if (c == 's')
		len += ft_print_str(len, va_arg(ap, char *));
	else if (c == 'd' || c == 'i')
		len += ft_print_int(len, va_arg(ap, int ));
	else if (c == 'u')
		len += ft_print_un_int(len, va_arg(ap, unsigned long ));
	else if (c == 'x' || c == 'X')
		len += ft_print_hex(len, c, va_arg(ap, unsigned int ));
	else if (c == 'p')
		len += ft_print_p(len, va_arg(ap, void *));
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		j;
	va_list	ap;

	va_start(ap, str);
	i = -1;
	j = 0;
	while (str[++i])
	{
		if (str[i] != '%' && str[i])
		{
			ft_putchar(str[i]);
			j++;
		}
		else if (str[i] == '%' && str[i + 1] != '%')
			j += ft_which(str[++i], ap);
		else if (str[i] == '%' && str[i + 1] == '%')
		{
			ft_putchar('%');
			i++;
			j++;
		}
	}
	va_end(ap);
	return (j);
}

// FAire les commentaires 
