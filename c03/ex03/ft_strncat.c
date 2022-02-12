/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:33:05 by odessein          #+#    #+#             */
/*   Updated: 2022/02/10 22:45:20 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		++size;
	return (size);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	brows;
	int				size_src;
	int				size_dest;
	char			*start;

	size_src = ft_strlen(src);
	size_dest = ft_strlen(dest);
	start = dest;
	brows = -1;
	while (++brows < nb)
	{
		if (brows > size_dest + nb + 1)
			break ;
		if (brows >= (unsigned int )size_src)
			break ;
		dest[size_dest + (brows)] = src[brows];
	}
	dest[size_dest + (++brows)] = '\0';
	dest = start;
	return (dest);
}
