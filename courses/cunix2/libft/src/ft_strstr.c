/*
 * =====================================================================================
 *
 *       Filename:  ft_strstr.c
 *
 *    Description: function finds the first occurrence of the substring
 *                 needle in the string haystack 
 *
 *        Version:  1.0
 *        Created:  08/20/2021 01:02:01 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */

#include "libft.h"

char *ft_strstr(char *haystack, char *needle)
{
    int i = 0;
    int j = 0;
    if (needle[0] == '\0')
    {
        return haystack;
    }
    while (haystack[i] != '\0')
    {
        while (haystack[i + j] != '\0' && haystack[i + j] == needle[j])
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

