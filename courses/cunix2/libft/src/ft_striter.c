/*
 * =====================================================================================
 *
 *       Filename:  ft_striter.c
 *
 *    Description: applies function f to each character of the string passed as argument 
 *
 *        Version:  1.0
 *        Created:  08/20/2021 05:26:52 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */

#include "libft.h"

void ft_striter(char *s, void (*f)(char *))
{
    int i = 0; 
    while (s[i] != '\0')
    {
        f(&s[i]);
        i++;
    }
}


