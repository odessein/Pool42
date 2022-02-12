/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:05:24 by odessein          #+#    #+#             */
/*   Updated: 2022/02/10 22:44:45 by odessein         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				size_src;
	int				size_dest;
	unsigned int	brows;
	unsigned int	brows_src;

	brows = 0;
	brows_src = -1;
	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	if (size < 1 || size_dest < size_src)
		return (size_src + size);
	if (size - size_dest - 1 <= 0)
		return (size_dest + size_src);
	while (brows < size - 1)
	{
		if (brows >= (unsigned int )size_dest)
		{
			dest[brows] = src[++brows_src];
		}
		++brows;
	}
	dest[brows] = '\0';
	return (size_src + size_dest);
}
