/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruins <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 16:52:40 by tbruins           #+#    #+#             */
/*   Updated: 2018/05/31 10:25:53 by tbruins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int	a;
	int	l;
	int	b;

	l = 0;
	while (to_find[l] != '\0')
		l++;
	if (l == 0)
		return (str);
	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		while (str[a + b] == to_find[b])
		{
			if (b == l - 1)
				return (str + a);
			b++;
		}
		b = 0;
		a++;
	}
	return (0);
}
