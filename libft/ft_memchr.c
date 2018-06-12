/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 11:48:17 by lsibanda          #+#    #+#             */
/*   Updated: 2018/06/04 14:40:16 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*a;
	size_t		i;

	a = (const char *)s;
	i = -1;
	while (++i < n)
		if (*(a + i) == (char)c)
			return ((void *)a + i);
	return (NULL);
}
