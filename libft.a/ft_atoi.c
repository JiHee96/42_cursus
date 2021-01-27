/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 15:31:01 by jihekim           #+#    #+#             */
/*   Updated: 2021/01/20 15:31:01 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' ||
			c == '\f' || c == '\v' || c == '\r')
		return (1);
	return (0);
}

int		is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_atoi(const char *str)
{
	int		i;
	int		num;
	int		flag;

	flag = 1;
	num = 0;
	i = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == '-')
		flag = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && is_digit(str[i]))
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	num *= flag;
	return (num);
}
