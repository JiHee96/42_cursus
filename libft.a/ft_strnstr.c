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

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	unsigned int	p;
	unsigned int	i;

	if (!*find)
		return ((char*)s);
	p = 0;
	while (s[p] && (size_t)p < len)
	{
		if (s[p] == find[0])
		{
			i = 1;
			while (find[i] && s[p + i] == find[i] && (size_t)(p + i) < len)
				i++;
			if (!find[i])
				return ((char *)&s[p]);
		}
		p++;
	}
	return (0);
}
