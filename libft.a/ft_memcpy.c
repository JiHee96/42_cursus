/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 22:08:10 by jihekim           #+#    #+#             */
/*   Updated: 2021/01/28 15:59:22 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char		*destp;
	const unsigned char	*srcp;

	if (!dst && !src)
		return (NULL);
	destp = dst;
	srcp = src;
	while (len > 0)
	{
		*destp++ = *srcp++;
		len--;
	}
	return (dst);
}
