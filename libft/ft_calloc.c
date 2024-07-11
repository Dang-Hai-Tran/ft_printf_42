/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datran <datran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:01:14 by datran            #+#    #+#             */
/*   Updated: 2022/11/29 16:18:48 by datran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*dest;

	if (size && number > SIZE_MAX / size)
		return (NULL);
	dest = malloc(number * size);
	if (!dest)
		return (NULL);
	ft_bzero(dest, number * size);
	return (dest);
}
