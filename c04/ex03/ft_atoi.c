/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 23:55:56 by odessein          #+#    #+#             */
/*   Updated: 2022/02/11 00:37:02 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	number;
	int	neg_sign;
	int	check_num;

	number = 0;
	check_num = 0;
	neg_sign = 1;
	while (*str == ' ' || *str < 32 || *str > 127)
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg_sign *= -1;
		++str;
	}
	while (*str < 58 && *str > 47)
	{
		check_num = 1;
		number = number * 10;
		number += *str - 48;
		++str;
	}
	if (check_num == 1)
		return (neg_sign * number);
	return (0);
}
