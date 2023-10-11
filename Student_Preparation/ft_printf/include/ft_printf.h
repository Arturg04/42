/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:44:49 by ade-pinh          #+#    #+#             */
<<<<<<< HEAD:Student_Preparation/ft_printf/ft_printf.h
/*   Updated: 2023/10/11 22:53:35 by ade-pinh         ###   ########.fr       */
=======
/*   Updated: 2023/10/10 08:25:27 by ade-pinh         ###   ########.fr       */
>>>>>>> cb1554b951bed7f31b0dca6c5bcef97a1d82658b:Student_Preparation/ft_printf/include/ft_printf.h
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

<<<<<<< HEAD:Student_Preparation/ft_printf/ft_printf.h
int				ft_printf(const char *str, ...);
unsigned int	ft_print_char(int c, int fd);
unsigned int	ft_print_putstr(char *str, int fd);
unsigned int	ft_print_num(int n, int fd);
unsigned int	ft_print_hex(int n, char *base, int fd);
unsigned int	ft_print_mem(unsigned long long ptr, int fd);
unsigned int	ft_print_un_num(unsigned int n, int fd);
=======
int	ft_printf(const char *str, ...);
int	ft_printf_str(char	*str, int fd);
int	ft_printf_char(char c, int fd);

>>>>>>> cb1554b951bed7f31b0dca6c5bcef97a1d82658b:Student_Preparation/ft_printf/include/ft_printf.h

#endif
