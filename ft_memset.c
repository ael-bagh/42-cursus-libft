/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bagh <ael-bagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:29:04 by ael-bagh          #+#    #+#             */
/*   Updated: 2019/10/12 19:36:00 by ael-bagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*pb;

	if (!len)
		return (b);
	pb = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		pb[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
