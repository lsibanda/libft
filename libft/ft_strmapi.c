/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 10:15:52 by lsibanda          #+#    #+#             */
/*   Updated: 2018/06/09 14:10:03 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*src;
	unsigned int	j;
	size_t			i;

	if (s && f)
	{
		i = 0;
		j = ft_strlen((char *)s);
		src = (char *)malloc(j * sizeof(src));
		while (s[i] != '\0')
		{
			src[i] = f(i, s[i]);
			i++;
		}
		return (src);
	}
	return (NULL);
}
