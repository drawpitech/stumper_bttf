/*
** EPITECH PROJECT, 2023
** Sum of digits
** File description:
** sum_of_digits
*/

#ifndef SUM_OF_DIGITS_H_
    #define SUM_OF_DIGITS_H_

    #include <stdlib.h>

    #define IS_DIGIT(c) (c >= '0' && c <= '9')

    #define ERR_NAME "Error: "
    #define ERR_INVALID ERR_NAME "Invalid input. Only positive integers are allowed.\n"
    #define ERR_NO_INPUT ERR_NAME "Invalid input. No input provided.\n"
    #define SENTINEL (size_t)-1

enum {
    RET_ERROR = 84,
    RET_VALID = 0,
};

size_t my_strlen(const char *str);
int my_putstr(const char *str);
int my_puterr(const char *str);
void my_putnbr(size_t nbr);
int sum_of_digits(const char *str);

#endif /* SUM_OF_DIGITS_H_ */
