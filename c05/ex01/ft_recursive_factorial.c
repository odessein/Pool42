/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:33:20 by odessein          #+#    #+#             */
/*   Updated: 2022/02/15 16:04:24 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 1)
		return (0);
	if (nb < 2)
		return (nb);
	nb = nb * ft_recursive_factorial(nb - 1);
}

int	main(void)
{
	int	a;

	a = ft_recursive_factorial('a');
	printf("%i", a);
	return (0);
}
