/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadeh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 20:01:23 by asaadeh           #+#    #+#             */
/*   Updated: 2024/08/27 21:33:42 by asaadeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if ((!d) && (!s))
		return (0);
	while (n > 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (dest);
}

/*int	main(void)
{
	char dest[5];
	char src[] = "";
	size_t n = 4;
	printf("%s\n", (char *)memcpy(dest,src,n));
	printf("%s\n", (char *)ft_memcpy(dest,src,n));
}*/