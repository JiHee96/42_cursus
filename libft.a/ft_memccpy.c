/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 22:08:13 by jihekim           #+#    #+#             */
/*   Updated: 2021/01/13 22:08:13 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t len)
{
    size_t              i;
    unsigned char       *dstpoint;
    const unsigned char *srcpoint;

    dstpoint = dst;
    srcpoint = src;
    i = 0;
    while(i < len)
    {
        *dstpoint = *srcpoint;
        if(*dstpoint == (unsigned char)c)
            return (dst + i + 1);
        i++;
    }
    return (NULL);
}
