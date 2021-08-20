/*
 * =====================================================================================
 *
 *       Filename:  ft_abs.c
 *
 *    Description: return absolute value 
 *
 *        Version:  1.0
 *        Created:  08/20/2021 11:43:01 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */

#include "libft.h"

int ft_abs(int x)
{
    if (x < 0)
    {
        return (x * -1);
    }
    return x;
}

