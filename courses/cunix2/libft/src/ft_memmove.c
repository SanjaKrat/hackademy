/*
 * =====================================================================================
 *
 *       Filename:  ft_memmove.c
 *
 *    Description: function copies n bytes from memory area src to
 *                 memory area dest. 
 *
 *        Version:  1.0
 *        Created:  08/20/2021 04:17:42 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *copy_dest = dest;
    char *copy_src = (char *)src; 
    for (size_t i = 0; i < n; i++)
    {
        copy_dest[i] = copy_src[i];
    }
    return dest;
}

