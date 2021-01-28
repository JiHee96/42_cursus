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

<<<<<<< HEAD
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
=======
void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
>>>>>>> d239ba84f63ebef7c0dd152aa6fa4e8cbc95ad43
{
	size_t			cnt;
	unsigned char	*srcc;
	unsigned char	*dstc;

	cnt = 0;
	srcc = (unsigned char*)src;
	dstc = (unsigned char*)dst;
	if (n)
	{
		while (cnt < n)
		{
			dstc[cnt] = srcc[cnt];
			if (srcc[cnt] == (unsigned char)c)
				return (&dstc[cnt + 1]);
			cnt++;
		}
	}
	return (NULL);
}
