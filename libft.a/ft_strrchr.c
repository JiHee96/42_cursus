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

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		len;

	len = ft_strlen(s);
	p = (char *)s + len - 1;
	if (c == '\0')
	{
		p++;
		return (p);
	}
	while (len != 0)
	{
		if (*p == c)
			return (p);
		len--;
		p--;
	}
	return (NULL);
}
