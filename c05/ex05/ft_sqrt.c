/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:13:20 by odessein          #+#    #+#             */
/*   Updated: 2022/02/15 16:06:35 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 2;
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i += 1;
	}
	return (0);
}

int	main(void)
{
	printf("%i", ft_sqrt(-1));
	return (0);
}
