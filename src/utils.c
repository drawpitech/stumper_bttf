/*
** EPITECH PROJECT, 2023
** Sum of digits
** File description:
** utils
*/

#include <unistd.h>

#include "sum_of_digits.h"

size_t my_strlen(const char *str)
{
    size_t len = 0;

    for (; str[len]; len++);
    return len;
}

int my_putstr(const char *str)
{
    write(STDOUT_FILENO, str, my_strlen(str));
    return RET_VALID;
}

int my_puterr(const char *str)
{
    write(STDERR_FILENO, str, my_strlen(str));
    return RET_ERROR;
}

void my_putnbr(size_t nbr)
{
    char buf[2];

    if (nbr > 10)
        my_putnbr(nbr / 10);
    buf[1] = '\0';
    buf[0] = nbr % 10 + '0';
    my_putstr(buf);
}
