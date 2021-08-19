/*
 * =====================================================================================
 *
 *       Filename:  ft_tolower.c
 *
 *    Description:  functions convert uppercase letters to lowercase
 *        Version:  1.0
 *        Created:  08/20/2021 12:38:32 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */

#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
    {
        return (c + 32);
    }
    else
    {
        return c;
    }
}

