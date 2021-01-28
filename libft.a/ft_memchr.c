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
	size_t			i;
	unsigned char	*s;
	unsigned char	cha;

	s = (unsigned char *)str;
	cha = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		if (*s == cha)
			return (s);
		s++;
		i++;
	}
	return (NULL);
}
