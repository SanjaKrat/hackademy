/*
 * =====================================================================================
 *
 *       Filename:  ft_isdigit.c
 *
 *    Description: checks for a digit (0 through 9) 
 *
 *        Version:  1.0
 *        Created:  08/20/2021 12:17:03 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */

#include "libft.h"

int ft_isdigit(int c)
{
    if (c >= 48 && c <= 57) 
    {
        return 1;
    }
    return 0;
}
