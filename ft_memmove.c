/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bagh <ael-bagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 10:52:38 by ael-bagh          #+#    #+#             */
/*   Updated: 2019/10/12 19:35:54 by ael-bagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	unsigned char	*pdst;
	unsigned char	*psrc;

	i = -1;
	pdst = dst;
	psrc = (unsigned char*)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if ((dst == src) || !len)
		return (dst);
	if (pdst < psrc)
		while (++i < len)
			pdst[i] = psrc[i];
	else
	{
		len--;
		while ((int)len >= 0)
		{
			pdst[len] = psrc[len];
			len--;
		}
	}
	return (pdst);
}
