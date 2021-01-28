/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 22:08:13 by jihekim           #+#    #+#             */
/*   Updated: 2021/01/28 15:40:45 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	size_t			cnt;
	unsigned char	*srcc;
	unsigned char	*dstc;

	cnt = 0;
	srcc = (unsigned char*)src;
	dstc = (unsigned char*)dst;
	if (len)
	{
		while (cnt < len)
		{
			dstc[cnt] = srcc[cnt];
			if (srcc[cnt] == (unsigned char)c)
				return (&dstc[cnt + 1]);
			cnt++;
		}
	}
	return (NULL);
}
