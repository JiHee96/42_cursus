/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 15:31:01 by jihekim           #+#    #+#             */
/*   Updated: 2021/01/20 15:31:01 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_space(char c)
{
    if ((c == ' ' || c == '\t' || c == '\n' ||
			c == '\f' || c == '\v' || c == '\r')
            return (1);
    return (0);            
}

int ft_digit(char c)
{
    if (c <= '9' && c > '0')
        return (1);
    return (0);
}

int ft_atoi(const char  *str)
{
    int result;
    int sign;

    result  = 0;
    sign = 1;
    while (ft_space(*str))
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        ++str;
    }
    whlie (ft_digit(*str))
    {
        result *= 10;
        result += *str - '0';
        ++str;
    }
    return (num * sign);
}
