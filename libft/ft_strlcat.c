/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datran <datran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:06:31 by datran            #+#    #+#             */
/*   Updated: 2022/11/25 15:06:33 by datran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	srcsize;
	size_t	destsize;

	if (!dest || !src)
		return (0);
	srcsize = ft_strlen(src);
	destsize = ft_strlen(dest);
	if (n < destsize)
		return (srcsize + n);
	else
	{
		dest = dest + destsize;
		ft_strlcpy(dest, src, n - destsize);
		return (srcsize + destsize);
	}
}
