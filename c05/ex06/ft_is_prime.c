/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:14:47 by odessein          #+#    #+#             */
/*   Updated: 2022/02/15 16:02:54 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_round_sqrt(int nb)
{
	int		i;
	float	f_i;

	i = 2;
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i += 1;
	}
	if (i * i > nb)
		return (i - 1);
	return (i);
}

int	ft_is_prime(int nb)
{
	int	sqrt_nb;
	int	start;

	sqrt_nb = ft_round_sqrt(nb);
	start = 2;
	if (nb < 1)
		return (0);
	else if (nb == 2 || nb == 3)
		return (1);
	while (start <= sqrt_nb)
	{
		if (nb % start == 0)
			return (0);
		start += 1;
	}
	return (1);
}

int	main(void)
{
	printf("%i", ft_is_prime(2147483648));
	return (0);
}
