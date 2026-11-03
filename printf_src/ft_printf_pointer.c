
#include "../ft_printf.h"


int ft_print_pointer(unsigned long long ptr)
{
    int count;

    count = 0;
    if (ptr >= 16)
        count += ft_print_pointer(ptr / 16);
    count += ft_printf_char("0123456789abcdef"[ptr % 16]);
    return (count);
}