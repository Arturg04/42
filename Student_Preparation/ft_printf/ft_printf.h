/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:44:49 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/10/11 22:53:35 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int				ft_printf(const char *str, ...);
unsigned int	ft_print_char(int c, int fd);
unsigned int	ft_print_putstr(char *str, int fd);
unsigned int	ft_print_num(int n, int fd);
unsigned int	ft_print_hex(int n, char *base, int fd);
unsigned int	ft_print_mem(unsigned long long ptr, int fd);
unsigned int	ft_print_un_num(unsigned int n, int fd);

#endif
