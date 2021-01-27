/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 00:53:03 by jihekim           #+#    #+#             */
/*   Updated: 2021/01/14 00:53:03 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  srclen;
    size_t  i;

    srclen = ft_strlen(src);
    i = 0;
    if (size)
    {
        while (src[i] && (i + 1) < size)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (srclen);
}
