/*
 * =====================================================================================
 *
 *       Filename:  ft_isascii.c
 *
 *    Description: checks whether c is a 7-bit unsigned char value 
 *                 that fits into the ASCII character set. 
 *
 *        Version:  1.0
 *        Created:  08/20/2021 12:22:26 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */

#include "libft.h"

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
    {
        return 1;
    }
    return 0;
}

