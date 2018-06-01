/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruins <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 12:46:31 by tbruins           #+#    #+#             */
/*   Updated: 2018/05/31 10:29:11 by tbruins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}