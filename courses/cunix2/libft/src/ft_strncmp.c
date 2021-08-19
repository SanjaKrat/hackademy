/*
 * =====================================================================================
 *
 *       Filename:  ft_strncmp.c
 *
 *    Description: function shall compare not more than n bytes 
 *                 (bytes that follow a null byte are not compared)  
 *                 from the array pointed to by s1 to the array 
 *                 pointed to by s2. 
 *
 *        Version:  1.0
 *        Created:  08/19/2021 07:16:42 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */
#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n) 
{
    size_t i = 0;
    while (i < n && s1[i] == s2[i] && s1[i] && s2[i])
    {
        i++;
    }
    if (s1[i] < s2[i])
    {
        return -1;
    }
    else if (n == 0 || s1[i] == s2[i])
    {
        return 0;
    }
    else 
    {
        return 1;
    }
}

