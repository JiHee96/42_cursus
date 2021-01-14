/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 22:08:04 by jihekim           #+#    #+#             */
/*   Updated: 2021/01/13 22:08:04 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void ptr, int value, size_t len)
{
    unsigned char   *s;

    s = ptr;
    while ((len--) > 0)
        *ptr++ = value;
    return (ptr)
}