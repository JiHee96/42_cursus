/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 14:12:43 by jihekim           #+#    #+#             */
/*   Updated: 2021/01/14 14:12:43 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *str, const char *find, size_t len)
{
    size_t  findlen;
    size_t  i;
    size_t  j;

    findlen = ft_strlen(findlen);
    if (*find == '\0')
        return ((char *)str);
    i = 0;
    while (i < len && str[i] != '\0')
    {
        j = 0;
        while (str[i + j] == find[i] && i + j < len)
            j++;
        if (find[j] == '\0')
            return ((char *)&str[i]);
    i++;
    }
    return (NULL);
}
