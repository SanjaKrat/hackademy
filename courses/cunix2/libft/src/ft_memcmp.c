/*
 * =====================================================================================
 *
 *       Filename:  ft_memcmp.c
 *
 *    Description:  function compares the first n bytes (each
 *                  interpreted as unsigned char) of the memory areas s1 and s2. 
 *
 *        Version:  1.0
 *        Created:  08/20/2021 02:41:15 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *comp1;
    unsigned char *comp2;
    size_t i = 0;

    comp1 = (unsigned char *)s1;
    comp2 = (unsigned char *)s2;
    while (n--)
    {
        if (comp1[i] != comp2[i])
        {
            return (comp1[i] - comp2[i]);
        }
        i++;
    }
    return 0;
}
