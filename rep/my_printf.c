#include <stdio.h>
#include <stdarg.h>
#include "my.h"
#include <unistd.h>
#include <string.h>

int ft_printf_string(va_list *my_list)
{
    char *src = va_arg(*my_list, char *);

    my_putstr(src);
}

int my_printf_chara(va_list *my_list)
{
    char c = va_arg(*my_list, int);

    my_putchar(c);
}

int my_printf_nmbr(va_list *my_list)
{
    int num = va_arg(*my_list, int);

    my_put_nbr(num);
}

int my_printf_nmbr_U(va_list *my_list)
{
    unsigned int num = va_arg(*my_list, int);

    my_put_nbr(num);
}

int find_flag(char *tbl, char elmt)
{
    for (int flag = 0; tbl[flag] != 0; flag++) {
        if (tbl[flag] == elmt)
            return (flag);
    }
    return (-1);
}

int my_printf(char *src, ...)
{
    va_list my_list;
    int tmp_flag = 0;
    va_start(my_list, src);
    void (*Funct_tbl[5]) (va_list *) = {my_printf_string, my_printf_chara, my_printf_nmbr, my_printf_nmbr, my_printf_nmbr_U};
    char tbl_f[5] = {'s', 'c', 'd', 'i', 'u'};

    for (int i = 0; src[i] != 0; i++) {
        if (i != 0 && src[i - 1] == '%') {
            tmp_flag = find_flag(tbl_f, src[i]);
            if (tmp_flag != + 1 || tmp_flag != - 1)
                (*Funct_tbl[tmp_flag]) (&my_list);
        }
        else if (src[i] != '%'){
             my_putchar(src[i]);
        }
    }
    va_end(my_list);
    return(my_printf);
}
