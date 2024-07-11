/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_parser.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datran <datran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:56:00 by datran            #+#    #+#             */
/*   Updated: 2022/11/29 16:19:45 by datran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_input_parser(const char *str, va_list args)
{
	int	pos;
	int	i;

	pos = 0;
	i = 0;
	while (str[pos])
	{
		if (str[pos] != '%')
			i = i + ft_putchar_fd(str[pos], 1);
		else if ((str[pos] == '%') && str[pos + 1])
		{
			pos++;
			if (ft_is_argument(str[pos]))
				i = i + ft_formats(str[pos], args);
			else if (str[pos])
				i = i + ft_putchar_fd(str[pos], 1);
		}
		pos++;
	}
	return (i);
}
