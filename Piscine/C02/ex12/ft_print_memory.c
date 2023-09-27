/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:19:50 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/08/30 23:23:31 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_pointer (char *c)
{
    while (*c != 0)
    {
        if( *c > 31 && *c < 127)
        {
            ft_putchar(*c);
        }
        else
        {
            ft_putchar('.');
        }
        c++;
    }
}

void print_memory_pointer(char *c)
{
    int i;

    i = 0;
    while (c[i] != 0)
    {
        print_memory_pointer((void *)&c[i]);
        i++;
    }
    
}

void get_hex_from_pointervalue(char ptr, char *hex)
{
    char dummy[] = "0123456789ABCDEF";
    int i;

    i = sizeof(hex) / 8 - 1;
    if (ptr < 100 && ptr >= 0)
    {
        if (ptr / 16 > 0)
        {
            hex[i] = dummy[ptr / 16];
            i++;
        }
        hex[i] = dummy[ptr % 16];
        return;
    }

    get_hex_from_pointervalue(ptr / 16, hex);
    i = sizeof(hex) / 8 ;
    hex[i] = dummy[ptr % 16];
}


void *ft_print_memory(void *addr, unsigned int size)
{
    char hex[8];
    int i;
    
    i = 0;
    get_hex_from_pointervalue((char)&addr[i], hex);
    print_memory_pointer(hex);
    ft_putchar(':');
    ft_putchar(' ');
    while (size > i)
    {
        get_hex_from_pointervalue((char)&addr[i], hex);
        if (i % 2 == 0)
        {
            ft_putchar(' ');
        }
        print_pointer(hex);    
        i++;
    }
    ft_putchar(' ');
    print_pointer(addr);
    return addr;
}

int main(void)
{
    char str[] = "Bonjour les amin";
    char *adrrs;
    unsigned int size;

    size = sizeof(str) / 8;
    ft_print_memory(str, size);
   
    return 0;
}