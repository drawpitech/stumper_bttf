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

    #define ERR_MSG "Invalid input. Only positive integers are allowed.\n"
    #define SENTINEL (size_t)-1

enum {
    RET_ERROR = 84,
    RET_VALID = 0,
};

#endif /* SUM_OF_DIGITS_H_ */
