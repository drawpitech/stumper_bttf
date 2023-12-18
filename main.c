/*
** EPITECH PROJECT, 2023
** Sum of digits
** File description:
** main
*/

#include <unistd.h>

#include "sum_of_digits.h"

static
size_t my_strlen(const char *str)
{
    size_t len = 0;

    for (; str[len]; len++);
    return len;
}

static
int my_putstr(const char *str)
{
    write(STDOUT_FILENO, str, my_strlen(str));
    return RET_VALID;
}

static
int my_puterr(const char *str)
{
    static const char name[] = "Error: ";

    write(STDERR_FILENO, name, sizeof(name));
    write(STDERR_FILENO, str, my_strlen(str));
    return RET_ERROR;
}

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

static
void my_putnbr(size_t nbr)
{
    char buf[2];

    if (nbr > 10)
        my_putnbr(nbr / 10);
    buf[1] = '\0';
    buf[0] = nbr % 10 + '0';
    my_putstr(buf);
}

int main(int argc, char **argv)
{
    size_t sum = 0;

    if (argc != 2 || argv[1] == NULL)
        return my_puterr("Invalid input. No input provided.\n");
    sum = my_sum_digits(argv[1]);
    if (sum == SENTINEL)
        return my_puterr(ERR_MSG);
    my_putstr("The sum of all the digits in the given integer is ");
    my_putnbr(sum);
    my_putstr(".\n");
    return RET_VALID;
}
