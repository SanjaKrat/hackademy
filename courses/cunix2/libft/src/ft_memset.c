/*
 * =====================================================================================
 *
 *       Filename:  ft_memset.c
 *
 *    Description: The memset() function fills the first n bytes of the memory area 
 *                 pointed to by s with the constant byte c 
 *
 *        Version:  1.0
 *        Created:  08/20/2021 02:06:04 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        ((unsigned char *)s)[i] = c;
    }
    return s;
}

