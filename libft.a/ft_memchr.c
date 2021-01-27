/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 00:01:32 by jihekim           #+#    #+#             */
/*   Updated: 2021/01/14 00:01:32 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *str, int c, size_t len)
{
    const unsigned char *s;
    size_t              i;

    i = 0;
    s = (const unsigned char *)str;
    while (i < len)
    {
        if(s[i] == (unsigned char)c)
            return ((void *)s + i);
        i++;
    }
    return (NULL);
}
