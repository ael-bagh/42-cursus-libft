/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_make_sure.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bagh <ael-bagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:54:15 by ael-bagh          #+#    #+#             */
/*   Updated: 2019/10/12 19:35:42 by ael-bagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int i;

	i = 0;
	if (!n || (s1 != NULL && s2 == s1))
		return (0);
	while (i < n)
	{
		if (*(unsigned char*)s1 != *(unsigned char*)s2)
		{
			return (*(unsigned char*)s1 - *(unsigned char*)s2);
		}
		i++;
		s1++;
		s2++;
	}
	return (0);
}
