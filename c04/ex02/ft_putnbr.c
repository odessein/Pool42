/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 21:07:51 by odessein          #+#    #+#             */
/*   Updated: 2022/02/10 23:45:45 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int n)
{
	char	to_int;

	if (n == -2147483648)
	{
		ft_putnbr(-214748);
		ft_putnbr(3648);
		return ;
	}
	if (n < 0)
	{
		write(STDOUT_FILENO, "-", 1);
		n = n * -1;
	}
	if (n < 9)
	{
		to_int = 48 + (n % 10);
		write(STDOUT_FILENO, &to_int, 1);
		return ;
	}
	else
		ft_putnbr(n / 10);
	to_int = 48 + (n % 10);
	write(STDOUT_FILENO, &to_int, 1);
}

int	main(void)
{
	ft_putnbr(2147483647);
	return (0);
}
