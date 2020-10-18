/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiykim <jiykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 20:01:43 by jiykim            #+#    #+#             */
/*   Updated: 2020/10/18 20:29:11 by jiykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int index;

	index = 0;
	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	return (*dest);
}
