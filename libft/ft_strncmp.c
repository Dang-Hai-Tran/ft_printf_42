/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datran <datran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:00:18 by datran            #+#    #+#             */
/*   Updated: 2022/11/25 11:00:22 by datran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	c = 0;
	if (n == 0)
		return (0);
	if (n != 0)
	{
		while (s1[c] == s2[c] && *s1 != '\0' && c < n - 1)
			c++;
	}
	else
		return (0);
	return (((unsigned char)(s1[c]) - (unsigned char)(s2[c])));
}
