/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bagh <ael-bagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 19:30:11 by ael-bagh          #+#    #+#             */
/*   Updated: 2019/10/12 21:07:46 by ael-bagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	if (s[i] == c)
		return ((char*)&s[i]);
	while (--i >= 0)
	{
		if (s[i] == (char)c)
			return ((char*)s + i);
	}
	return (NULL);
}
