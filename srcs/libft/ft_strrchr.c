/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbellar <anbellar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:51:27 by anbellar          #+#    #+#             */
/*   Updated: 2024/11/27 14:45:57 by anbellar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*resultat;
	char	cc;

	cc = (char)c;
	resultat = NULL;
	i = 0;
	if (cc == '\0')
	{
		i = ft_strlen(s);
		resultat = (char *)(s + i);
		return (resultat);
	}
	while (s[i])
	{
		if (s[i] == cc)
			resultat = (char *)(s + i);
		i++;
	}
	return (resultat);
}
