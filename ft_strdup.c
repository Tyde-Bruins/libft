/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruins <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 15:13:32 by tbruins           #+#    #+#             */
/*   Updated: 2018/05/31 10:22:09 by tbruins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dst;
	int		a;

	a = 0;
	while (src[a] != '\0')
	{
		a++;
	}
	a++;
	dst = (char *)malloc(sizeof(char) * a);
	while (a >= 0)
	{
		dst[a] = src[a];
		a--;
	}
	return (dst);
}
