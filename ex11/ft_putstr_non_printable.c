/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiykim <jiykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 20:10:38 by jiykim            #+#    #+#             */
/*   Updated: 2020/10/26 21:16:08 by jiykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hexa(unsigned char d)
{
	unsigned char hexa[3];

	hexa[0] = '\\';
	hexa[1] = "0123456789abcdef"[d / 16];
	hexa[2] = "0123456789abcdef"[d % 16];
	write(1, hexa, 3);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			ft_hexa(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
