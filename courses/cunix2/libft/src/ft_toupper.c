/*
 * =====================================================================================
 *
 *       Filename:  ft_toupper.c
 *
 *    Description: functions convert lowercase letters to uppercase 
 *
 *        Version:  1.0
 *        Created:  08/20/2021 12:26:39 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */

#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
    {
        return (c - 32);
    }
    else
    {
        return c;
    }
}

