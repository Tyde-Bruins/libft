/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruins <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 08:35:53 by tbruins           #+#    #+#             */
/*   Updated: 2018/05/31 10:16:37 by tbruins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *str;
	size_t				i;

	i = 0;
	if (str[i] == (unsigned char *)c)
	{
		return (i);
	}
	i++;
	else 
	{
		return (NULL);
	}
}
