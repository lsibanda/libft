/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 10:47:09 by lsibanda          #+#    #+#             */
/*   Updated: 2018/06/04 14:12:36 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*sorc;
	char	*dest;
	size_t	i;

	i = -1;
	sorc = (char *)src;
	dest = (char *)dst;
	if (sorc < dest)
		while ((int)(--len) >= 0)
			*(dest + len) = *(sorc + len);
	else
		while (++i < len)
			*(dest + i) = *(sorc + i);
	return (dst);
}
