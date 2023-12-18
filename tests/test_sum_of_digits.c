/*
** EPITECH PROJECT, 2023
** Sum of digits
** File description:
** tests for sum_of_digits
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

#include "sum_of_digits.h"

static
void redirect_all(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(sum_of_digits, ex1, .init=redirect_all)
{
    int res = sum_of_digits("123");

    cr_assert_eq(res, 0);
    cr_assert_stdout_eq_str("The sum of all digits in the given integer is 6.\n");
}

Test(sum_of_digits, ex2, .init=cr_redirect_stderr)
{
    int res = sum_of_digits("123a4");

    cr_assert_eq(res, 84);
    cr_assert_stderr_eq_str("Error: Invalid input. Only positive integers are allowed.\n");
}
