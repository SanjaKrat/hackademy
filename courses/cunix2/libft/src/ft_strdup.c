/*
 * =====================================================================================
 *
 *       Filename:  ft_strdup.c
 *
 *    Description: function returns a pointer to a new string which
 *                 is a duplicate of the string s 
 *
 *        Version:  1.0
 *        Created:  08/19/2021 06:42:21 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */
#include "libft.h"

char *ft_strdup(const char *s)
{
    int length = 0;
    while (s[length] != '\0')
    {
        length++;
    }
    char *new_string = (char *)malloc(sizeof(char) * length);
    if (!new_string)
    {
        return NULL;
    }
    int i = 0; 
    while (s[i])
    {
        new_string[i] = s[i];
        i++;
    }

    return new_string;
}

