/*
 * =====================================================================================
 *
 *       Filename:  ft_strnstr.c
 *
 *    Description: function locates the first occurrence of the null-terminated string 
 *
 *        Version:  1.0
 *        Created:  08/20/2021 01:54:01 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t i = 0;
    int j = 0;
    if (needle[0] == '\0')
    {
        return (char *) haystack;
    }
    while (haystack[i] != '\0' && i < n)
    {
        while (haystack[i + j] != '\0' && haystack[i + j] == needle[j] && i < n)
        {
            if (needle[j + 1] == '\0')
            {
                return (char *)&haystack[i];
            }
            j++;
        }
        i++;
    }
    return NULL;
}

