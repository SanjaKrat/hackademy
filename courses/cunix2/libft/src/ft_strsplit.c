/*
 * =====================================================================================
 *
 *       Filename:  ft_strsplit.c
 *
 *    Description: allocate and return an array of "fresh" strings  
 *
 *        Version:  1.0
 *        Created:  08/21/2021 08:39:30 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */

#include "libft.h"

char **ft_strsplit(char const *s, char c)
{
    int num_words = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        while (s[i] == c)
            i++;
        if (s[i])
        {
            num_words++;
            while (s[i] && s[i] != c)
                i++;
        }
    } 

    char **arr = (char **)malloc(num_words * sizeof(char)); 

    int str_idx = 0;
    int len = 0;
    int arr_idx = 0;
    i = 0;
    for (int i = 0; s[i] != 0; i++)
    {
        if(s[i] == c && len != 0)
        {
            char *word = (char *)malloc(len * sizeof(char));
            for (int j = str_idx, k = 0; k < len; j++, k++)
            {
                word[k] = s[j];
            }
            arr[arr_idx] = word;
            str_idx = i+1;
            len = 0;
            arr_idx++;
            continue;
        }
        if(s[i] == c && len == 0)
        {
            str_idx++;
            continue;
        }
        len++;
    }
    
    if(len != 0)
    {
        char* word = (char*)malloc(len*sizeof(char));
        for (int j = str_idx, k = 0; k < len; j++, k++)
        {
            word[k] = s[j];
        }
        arr[arr_idx] = word;
    }

    return arr;
}

