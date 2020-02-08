/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bagh <ael-bagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:28:02 by ael-bagh          #+#    #+#             */
/*   Updated: 2019/10/13 17:52:44 by ael-bagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*re;

	re = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*(unsigned char*)s == (unsigned char)c)
		{
			re = (unsigned char *)s;
			return (re);
		}
		s++;
		i++;
	}
	return (NULL);
}
