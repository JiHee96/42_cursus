/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 12:49:56 by jihekim           #+#    #+#             */
/*   Updated: 2021/01/14 12:49:56 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *str, int c)
{
    size_t  len;

    len = ft_strlen(str);
    if ((char)c == '\0')
       return ((char *)str + len);
    whlie (len != 0)
    {
        if (*(s + len) == c)
            return ((char *)(s + len));
    }
    return (NULL);
}