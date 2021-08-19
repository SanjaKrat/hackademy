/*
 * =====================================================================================
 *
 *       Filename:  ft_strchr.c
 *
 *    Description: Returns a pointer to the first occurrence of 
 *                 character in the C string str. 
 *
 *        Version:  1.0
 *        Created:  08/19/2021 10:44:35 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */

#include "libft.h"

char *ft_strchr(const char *str, int character)
{
    int i = 0;
    while (str[i] && str[i] != character)
    {
        i++;
    }
    if (str[i] == character)
    {
        return (char *)str + i;
    }
    else
    {
        return NULL;
    }
}


