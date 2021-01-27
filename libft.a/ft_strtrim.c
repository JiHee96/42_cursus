/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 15:29:53 by jihekim           #+#    #+#             */
/*   Updated: 2021/01/27 15:29:53 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_end(char const *s1, char const *set, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && ft_strchr(set, s1[len - 1 - i]))
		i++;
	return (len - i);
}

size_t	ft_start(char const *s1, char const *set, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && ft_strchr(set, s1[i]))
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*str;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	len = ft_strlen(s1);
	start = ft_start(s1, set, len);
	end = ft_end(s1, set, len);
	if (start >= end)
		return (ft_strdup(""));
	if (!(str = (char *)malloc(sizeof(char) * (end - start + 1))))
		return (0);
	ft_strlcpy(str, s1 + start, end - start + 1);
	return (str);
}
