/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:17:54 by odessein          #+#    #+#             */
/*   Updated: 2022/02/14 14:02:14 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	count;

	count = nb - 1;
	while (count > 0)
	{
		nb = nb * count;
		count--;
	}
	return (nb);
}

int	main(void)
{
	ft_iterative_factorial(5);
	return (0);
}
