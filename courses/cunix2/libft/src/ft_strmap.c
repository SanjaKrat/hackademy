/*
 * =====================================================================================
 *
 *       Filename:  ft_strmap.c
 *
 *    Description: applies the function f to each character of the string given as 
 *                 argument to create a "fresh" new string (with malloc(3))
 *
 *        Version:  1.0
 *        Created:  08/20/2021 05:36:41 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */

#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
    int length = 0;
    while (s[length] != '\0')
    {
        length++;
    }
    char *new_s = (char *)malloc(length * sizeof(char));
    int i = 0;
    while (i < length)
    {
        new_s[i] = f(s[i]);
        i++;
    }
    return new_s;
}

