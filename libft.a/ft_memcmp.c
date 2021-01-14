/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 00:30:23 by jihekim           #+#    #+#             */
/*   Updated: 2021/01/14 00:30:23 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_memcmp(const void *s1, const void *s2, size_t len)
{
    const unsigned char *s1p;
    const unsigned char *s2p;
    size_t              i;

    s1p = (const unsigned char *)s1;
    s2p = (const unsigned char *)s2;
    i = 0;
    whlie (i < len)
    {
        if(s1p[i] != s2p[i])
            return (s1p[i] - s2p[i]);
        i++;
    }
    return (NULL);
}