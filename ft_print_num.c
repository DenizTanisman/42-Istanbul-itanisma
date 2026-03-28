/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itanisma <ismaildeniztanisman@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 11:19:45 by itanisma          #+#    #+#             */
/*   Updated: 2026/03/28 12:26:11 by itanisma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_unsigned(unsigned int n)
{
	int count;

	count = 0;
	if (n >= 10)
		count += ft_print_unsigned(n/10);
	count += ft_putchar_fd((n % 10) + '0', 1);
	return (count);
}