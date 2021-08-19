/*
 * =====================================================================================
 *
 *       Filename:  ft_isalpha.c
 *
 *    Description: checks for an alphabetic character 
 *
 *        Version:  1.0
 *        Created:  08/20/2021 12:06:55 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */

#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        return 1;
    }
    return 0;
}

