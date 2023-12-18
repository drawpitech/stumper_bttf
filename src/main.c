/*
** EPITECH PROJECT, 2023
** Sum of digits
** File description:
** main
*/

#include "sum_of_digits.h"

int main(int argc, char **argv)
{
    if (argc != 2 || argv[1] == NULL)
        return my_puterr(ERR_NO_INPUT);
    return sum_of_digits(argv[1]);
}
