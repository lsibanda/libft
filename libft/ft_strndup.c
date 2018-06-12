/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 10:39:34 by lsibanda          #+#    #+#             */
/*   Updated: 2018/06/05 10:42:04 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*ptr;

	if (!(ptr = ft_strnew(n)))
		return (NULL);
	ft_strncpy(ptr, s1, n);
	return (ptr);
}
