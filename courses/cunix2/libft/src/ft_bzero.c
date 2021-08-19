/*
 * =====================================================================================
 *
 *       Filename:  ft_bzero.c
 *
 *    Description: function fills the first n bytes of the object pointed to by dst with zero (NUL) bytes. 
 *
 *        Version:  1.0
 *        Created:  08/19/2021 05:38:28 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */

#include "libft.h" 

void ft_bzero(void *dst, size_t n)
{
    char *copy_dest = dst;
    for (size_t i = 0; i < n; i++)
    {
        copy_dest[i] = '\0';
    }
}

