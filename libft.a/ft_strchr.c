/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 01:57:26 by jihekim           #+#    #+#             */
/*   Updated: 2021/01/14 01:57:26 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    while ((char *)str)
    {
        if ((char *)str == c)
            return ((char *)str);
        str++;
    }
    if (c == '\0' && (char *)str == '\0')
        return ((char *)str);
    return (NULL);
}