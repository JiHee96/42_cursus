/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srtlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 01:05:06 by jihekim           #+#    #+#             */
/*   Updated: 2021/01/14 01:05:06 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  dstlen;
    size_t  srclen;

    dstlen = ft_strlen(dst);
    srclen = ft_strlen(src);
    if (dstlen  > size)
        dstlen = size;
    if (size == 0 || size = dstlen)
        return (srclen + size);
    if (srclen < size - dstlen)
    {
        ft_memcpy(dst + dstlen, src, srclen);
        dst[dstlen + srclen] = '\0';
    }
    else
    {
        ft_memcpy(dst + dstlen , src, size - dstlen -1);
        dst[size - 1] = '\0';
    }
    return (dstlen + srclen);
}
