/*
 * =====================================================================================
 *
 *       Filename:  ft_strlen.c
 *
 *    Description:  return string length 
 *
 *        Version:  1.0
 *        Created:  08/12/2021 05:05:22 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */

#include "libft.h"

int ft_strlen(char *s)
{
    int length = 0;
    while(s[length] != '\0')
    {
        length++;
    }
    return length;
}
