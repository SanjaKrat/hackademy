/*
 * =====================================================================================
 *
 *       Filename:  ft_strrchr.c
 *
 *    Description: searches for the last occurrence of the character 
 *                 c (an unsigned char) in the string pointed to, by 
 *                 the argument str. 
 *
 *        Version:  1.0
 *        Created:  08/19/2021 11:23:38 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    while (length > 0)
    {
        if (str[length] == c)
        {
            return (char *)&str[length];
        }
        else
        {
            length--;
        }
    }
    return NULL;
}

