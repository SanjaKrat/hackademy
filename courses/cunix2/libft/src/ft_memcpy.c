/*
 * =====================================================================================
 *
 *       Filename:  ft_memcpy.c
 *
 *    Description: function copies n bytes from memory area src to memory area dest. 
 *
 *        Version:  1.0
 *        Created:  08/20/2021 02:30:08 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
    }
    return dest;
}

