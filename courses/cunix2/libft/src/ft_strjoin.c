/*
 * =====================================================================================
 *
 *       Filename:  ft_strjoin.c
 *
 *    Description: allocate and returns a "fresh" string ending 
 *                 with '\0'
 *
 *        Version:  1.0
 *        Created:  08/21/2021 06:12:15 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int len_s = 0;
    while (s1[len_s] != '\0')
    {
        len_s++;
    }
    while (s2[len_s] != '\0')
    {
        len_s++;
    }


    char *new_s = (char *)malloc((len_s + 1) * sizeof(char));

    int i = 0;
    while (s1[i] != '\0')
    {
        new_s[i] = s1[i];
        i++;
    }
    while (s2[i] != '\0')
    {
        new_s[i] = s2[i];
        i++;
    }
    new_s[i] = '\0';

    return new_s;
}

