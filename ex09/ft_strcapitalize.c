/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiykim <jiykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 18:54:43 by jiykim            #+#    #+#             */
/*   Updated: 2020/10/28 19:06:31 by jiykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 'a' - 'A';
	while (str[i++])
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'a' - 'A';
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			if (!(str[i] >= 'A' && str[i] <= 'Z'))
				if (!(str[i] >= '0' && str[i] <= '9'))
				{
					if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
						str[i + 1] -= 'a' - 'A';
				}
		i++;
	}
	return (str);
}
