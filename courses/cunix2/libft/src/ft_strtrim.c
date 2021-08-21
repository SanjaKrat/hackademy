/*
 * =====================================================================================
 *
 *       Filename:  ft_strtrim.c
 *
 *    Description: allocate and return a copy of string given as
 *                 arg without whitespaces (' ', '\n', '\t') at the
 *                 beginning ar at the end of string
 *
 *        Version:  1.0
 *        Created:  08/21/2021 06:47:12 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */

#include "libft.h"

char *ft_strtrim(char const *s)
{
    int len_s = 0;
    while (s[len_s] != '\0')
    {
        len_s++;
    }
    
    //finding start and end index without witespaces
    int start = 0;
    int end = len_s - 1;
   
    while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
    {
        start++;
    }
    
    while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
    {
        end--;

    }

    char *new_s = (char *)malloc((end + 1 - start + 1) * sizeof(char));
    if (new_s == NULL || end < 0 || start == len_s)
    {
        return NULL;
    }
    //copy needed part of *s to new_s
    int j = 0;
    while (start <= end)
    {
        
        new_s[j] = s[start];
        start++;
        j++;
    }
    new_s[j] = '\0';

    return new_s;
}
