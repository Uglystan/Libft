/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:57:40 by lgirault          #+#    #+#             */
/*   Updated: 2023/04/05 11:14:56 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *str, int *len, int fd)
{
	int	i;

	i = 0;
	if (!str)
	{
		write (1, "(null)", 6);
		*len = *len + 6;
	}
	else
	{
		while (str[i])
		{
			ft_putchar_fd_printf(str[i], len, fd);
			i++;
		}
	}
}
