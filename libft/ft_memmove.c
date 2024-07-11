/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datran <datran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:36:48 by datran            #+#    #+#             */
/*   Updated: 2022/11/25 15:11:39 by datran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	*ft_revmemcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (!dest || !src)
		return (NULL);
	d = dest + n - 1;
	s = src + n - 1;
	while (n > 0)
	{
		*d = *s;
		d--;
		s--;
		n--;
	}
	return (d);
}

void	*ft_memmove(void *dest, const void*src, size_t n)
{
	if (!dest || !src)
		return (NULL);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
		ft_revmemcpy(dest, src, n);
	return (dest);
}
