/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbellar <anbellar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:45:03 by anbellar          #+#    #+#             */
/*   Updated: 2024/11/17 20:00:41 by anbellar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlen(const char *str);

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	src_size;

	src_size = ft_strlen(src);
	if (src_size + 1 < destsize)
		ft_memcpy(dest, src, src_size + 1);
	else if (destsize != 0)
	{
		ft_memcpy(dest, src, destsize - 1);
		dest[destsize - 1] = 0;
	}
	return (src_size);
}
