/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ideniz <ideniz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 by ideniz               #+#    #+#             */
/*   Updated: 2026/03/28 by ideniz              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c)
{
	return (ft_putchar_fd((char)c, 1));
}

int	ft_print_string(char *s)
{
	if (s == NULL)
		return (ft_putstr_fd("(null)", 1));
	return (ft_putstr_fd(s, 1));
}

static int	parser(char c, va_list args)
{
	if (c == 'd' || c == 'i')
		return (ft_print_int(va_arg(args, int)));
	else if (c == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	else if (c == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	else if (c == 'p')
		return (ft_print_pointer(va_arg(args, void *)));
	else if (c == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_print_hex_lower(va_arg(args, unsigned int)));
	else if (c == 'X')
		return (ft_print_hex_upper(va_arg(args, unsigned int)));
	else if (c == '%')
		return (ft_putchar_fd('%', 1));
	return (0);
}
// YAPILACAKLAR:
// [ ] static int handle_conversion(char specifier, va_list args)
// [ ] Switch-case ile specifier'ı kontrol et:
//     - 'c': ft_print_char çağır
//     - 's': ft_print_string çağır
//     - 'p': ft_print_pointer çağır
//     - 'd'/'i': ft_print_int çağır
//     - 'u': ft_print_unsigned çağır
//     - 'x': ft_print_hex_lower çağır
//     - 'X': ft_print_hex_upper çağır
//     - '%': ft_putchar_fd('%', 1) çağır

int ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, format);
	i = 0;
	count = 0;
	while(format[i])
	{
		if (format[i] == '%')
		{
			i++;  
			count += parser(format[i], args);  
		}
			count += ft_putchar_fd(format[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
