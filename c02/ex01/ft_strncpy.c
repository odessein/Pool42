/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:18:45 by odessein          #+#    #+#             */
/*   Updated: 2022/02/09 09:40:49 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	counter;

	counter = 0;
	while (src[counter] != '\0' && (unsigned int) counter < n)
	{
		dest[counter] = src[counter];
		++counter;
	}
	dest[counter] = '\0';
	return (dest);
}
