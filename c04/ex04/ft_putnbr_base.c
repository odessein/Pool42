/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */ /*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */ /*                                                +#+#+#+#+#+   +#+           */ /*   Created: 2022/02/11 09:58:06 by odessein          #+#    #+#             */ /*   Updated: 2022/02/11 11:56:22 by odessein         ###   ########.fr       */ /*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

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
	if (base_base <= 1)
		return ;
	if (nbr <= 0)
	{
		return ;
	}
	base_to_base = nbr % base_base;
	printf("%i\n", base_to_base);
	ft_putnbr_base(nbr / base_base, base);
//	write(STDOUT_FILENO, (base + base_to_base), 1); 
}

int	main(void)
{
	ft_putnbr_base(8, "01234567");
	return (0);
}

