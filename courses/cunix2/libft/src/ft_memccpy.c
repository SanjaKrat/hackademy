/*
 * =====================================================================================
 *
 *       Filename:  ft_memccpy.c
 *
 *    Description: function copies no more than n bytes from memory
 *                 area src to memory area dest, stopping when the character c is
 *                 found. 
 *
 *        Version:  1.0
 *        Created:  08/20/2021 04:46:41 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */

#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    char *copy_dest = dest;
    char *copy_src = (char *)src;
    int i = 0;
    while (n--)
    {
        copy_dest[i] = copy_src[i];
        if (copy_src[i] == c)
        {
            return &copy_src[i + 1];
        }
        i++;
    }
    return NULL;
}

