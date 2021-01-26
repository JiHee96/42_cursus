/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 15:37:10 by jihekim           #+#    #+#             */
/*   Updated: 2021/01/14 15:37:10 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t num)
{
    size_t  i;

    i = 0;
    if (num == 0)
      return (0);
    while ((s1[i] != '\0' || s2[i] != '\0') && i < num)
    {
      if (s1[i] > s2[i])
        return ((unsigned char)s1[i] - (unsigned char)s2[i]);
      if (s2[i] > s1[i])
        return ((unsigned char)s1[i] - (unsigned char)s2[i]);
      i++;
    }
}
