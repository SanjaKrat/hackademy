/*
 * =====================================================================================
 *
 *       Filename:  ft_memchr.c
 *
 *    Description: function scans the initial n bytes of the memory
 *                 area pointed to by s for the first instance of c. 
 *
 *        Version:  1.0
 *        Created:  08/20/2021 04:33:12 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    char *copy_s = (char *)s; 
    for (size_t i = 0; i < n; i++)
    {
        if (copy_s[i] == c)
        {
            return &copy_s[i];
        }
    }
    return NULL;
}

