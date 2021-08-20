/*
 * =====================================================================================
 *
 *       Filename:  ft_div.c
 *
 *    Description: return quotient and remainder of dividing 
 *
 *        Version:  1.0
 *        Created:  08/20/2021 11:48:35 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Oleksandr Krat (OK), oleksandrkrat@gmail.com
 *        Company:  Sakrat
 *
 * =====================================================================================
 */

#include "libft.h"


div_t ft_div(int num, int denom)
{
    div_t result = {num / denom, num - denom *(num / denom)};
    return result;
}


