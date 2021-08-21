/*
 * =====================================================================================
 *
 *       Filename:  ft_strsub.c
 *
 *    Description: allocate and return a "fresh" substring from the string given as 
 *                 argument 
 *
 *        Version:  1.0
 *        Created:  08/20/2021 06:26:04 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */

#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
    unsigned int length_s = 0;
    while (s[length_s] != '\0')
    {
        length_s++;
    }
    char *new_s = (char *)malloc((len + 1) * sizeof(char));
    unsigned int i = 0;
    if (start > length_s && (start + len) > length_s)
    {
        return NULL;
    }
    while (i < len)
    {
        new_s[i] = s[start + i];
        i++;
    }
    return new_s;
}

