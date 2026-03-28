/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ideniz <ideniz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 by ideniz               #+#    #+#             */
/*   Updated: 2026/03/28 by ideniz              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
int		ft_print_char(int c);
int		ft_print_string(char *s);
int		ft_print_int(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_pointer(void *ptr);
int		ft_puthex(unsigned int n, int is_upper);
int		ft_print_hex_lower(unsigned int n);
int		ft_print_hex_upper(unsigned int n);

#endif
