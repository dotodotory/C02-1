/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiykim <jiykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 20:10:38 by jiykim            #+#    #+#             */
/*   Updated: 2020/10/26 00:54:28 by jiykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_hexa(char d)
{
	char hexa[3];
	char h[16] = "123456789abcdef";

	hexa[0] = '\\';
	hexa[1] = h[d / 16];
	hexa[2] = h[d % 16];
	return (hexa);
}

void	ft_putstr_non_printable(char *str);
{
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)
			write(1, ft_hexa(str[i]), 3);
		else
			write(1, str[i], 1);
		i++;
	}
}
