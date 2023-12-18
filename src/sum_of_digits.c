/*
** EPITECH PROJECT, 2023
** Sum of digits
** File description:
** sum_of_digits
*/

#include <unistd.h>

#include "sum_of_digits.h"

static
size_t my_sum_digits(const char *str)
{
    size_t sum = 0;

    if (str == NULL)
        return SENTINEL;
    for (size_t i = 0; str[i]; i++) {
        if (!IS_DIGIT(str[i]))
            return SENTINEL;
        sum += str[i] - '0';
    }
    return sum;
}

int sum_of_digits(const char *str)
{
    size_t sum = 0;

    if (str == NULL)
        return my_puterr(ERR_NO_INPUT);
    sum = my_sum_digits(str);
    if (sum == SENTINEL)
        return my_puterr(ERR_INVALID);
    my_putstr("The sum of all digits in the given integer is ");
    my_putnbr(sum);
    my_putstr(".\n");
    return RET_VALID;
}
