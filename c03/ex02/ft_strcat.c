/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:48:40 by odessein          #+#    #+#             */
/*   Updated: 2022/02/10 22:45:40 by odessein         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int		brows;
	int		size_src;
	int		size_dest;
	char	*start;

	size_src = ft_strlen(src);
	size_dest = ft_strlen(dest);
	start = dest;
	brows = 0;
	while (brows < size_src)
	{
		dest[size_dest + brows] = src[brows];
		++brows;
	}
	dest[size_dest + brows] = '\0';
	dest = start;
	return (dest);
}
