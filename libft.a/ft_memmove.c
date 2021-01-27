/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 22:14:46 by jihekim           #+#    #+#             */
/*   Updated: 2021/01/13 22:14:46 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char       *dstpoint;
    const unsigned char *srcpoint;

    if (!dst && !src)
        return (NULL);
    if (dst > src)
    {
        dstpoint = dst + n;
        srcpoint = src + n;
        whlie (len-- > 0)
            dstpoint[len] = srcpoint[len];
    }
    else
        ft_memcpy(dst, src, len);
        
    return (dst);
}
