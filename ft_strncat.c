/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruins <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:58:32 by tbruins           #+#    #+#             */
/*   Updated: 2018/05/31 10:23:36 by tbruins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const *restrict s2, size_t n)
{
	unsigned char 	*dst;

	dst = s1;
	while (*s1)
		s1++;
	ft_strncpy(s1, s2);
	return (dst);
}