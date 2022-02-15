/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */ /*                                                    +:+ +:+         +:+     */ /*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:10:51 by odessein          #+#    #+#             */
/*   Updated: 2022/02/14 11:25:01 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_check_string(char *base, char to_find)
{
	while (*base)
	{
		if (to_find == *base)
			return 0;
		++base;
	}
	return 1;
}

int	ft_length_base(char *base)
{
	char	*based;
	int		size;

	size = 0;
	while (*base)
	{
		if (*base != '\0' && ft_check_string(base + 1, *base) == 0)
			return 0;
		if (*base == '+' || *base == '-' || *base < 33 || *base > 126)
			return (0);
		++base;
		++size;
	}
	return size;
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_base;
	int	base_to_base;

	base_base = ft_length_base(base);
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		write(STDOUT_FILENO, "-", 1);
	}
	if (base_base <= 1)
		return ;
	if (nbr <= 0)
	{
		return ;
	}
	base_to_base = nbr % base_base;
	ft_putnbr_base(nbr / base_base, base);
	write(STDOUT_FILENO, (base + base_to_base), 1); 
}

void	ft_putnbr_base(int nbr, char *base);

int		main(void)
{
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");
}
