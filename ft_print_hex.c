/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itanisma <ismaildeniztanisman@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 12:25:58 by itanisma          #+#    #+#             */
/*   Updated: 2026/03/28 12:40:20 by itanisma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, int is_upper)
{
	int		count;
	char	*base;

	count = 0;
	if (is_upper == 2)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
		count += ft_puthex(n / 16, is_upper);
	count += ft_putchar_fd(base[n % 16], 1);
	return (count);
}

static int	ft_print_hex_ptr(unsigned long n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_print_hex_ptr(n / 16);
	count += ft_putchar_fd("0123456789abcdef"[n % 16], 1);
	return (count);
}

int	ft_print_pointer(void *ptr)
{
	int	count;

	if (ptr == NULL)
		return (ft_putstr_fd("(nil)", 1));
	count = ft_putstr_fd("0x", 1);
	count += ft_print_hex_ptr((unsigned long)ptr);
	return (count);
}