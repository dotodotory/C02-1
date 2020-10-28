/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiykim <jiykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 19:45:05 by jiykim            #+#    #+#             */
/*   Updated: 2020/10/28 19:20:49 by jiykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hexa(unsigned int d)
{
	if (d > 16)
	{
		ft_hexa(d / 16);
		ft_hexa(d % 16);
	}
	else
		write(1, &"0123456789abcdef"[d], 1);
}

void	print_8(unsigned int i, unsigned int size, unsigned char *str)
{
	unsigned int j;

	j = 0;
	while (j < 16 && j + i < size)
	{
		write(1, &"0123456789abcdef"[str[j + i] / 16], 1);
		write(1, &"0123456789abcdef"[str[j + i] % 16], 1);
		if (j % 2 == 1)
		{
			write(1, " ", 1);
		}
		j++;
	}
}

void	print_hexa(unsigned int i, unsigned int size, unsigned char *p)
{
	unsigned int	count;
	unsigned int	temp;

	temp = (unsigned int)p;
	count = 0;
	while (temp > 0)
	{
		temp /= 16;
		count++;
	}
	while (count++ < 16)
		write(1, "0", 1);
	ft_hexa((unsigned int)p);
	write(1, ":", 1);
	write(1, " ", 1);
	print_8(i, size, p + i);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned char	*p;

	p = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		print_hexa(i, size, p + i);
		j = 0;
		while (j < 16 && i + j < size)
		{
			if (p[i + j] < 32 || p[i + j] > 126)
				write(1, ".", 1);
			else
				write(1, &p[i + j], 1);
			j++;
		}
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
