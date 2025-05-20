/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbellar <anbellar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:40:12 by anbellar          #+#    #+#             */
/*   Updated: 2024/11/17 23:05:02 by anbellar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = malloc(elementCount * elementSize);
	if (!str)
		return (NULL);
	while (i < elementCount * elementSize)
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}
