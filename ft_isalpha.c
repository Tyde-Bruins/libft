/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruins <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 16:35:38 by tbruins           #+#    #+#             */
/*   Updated: 2018/05/31 10:28:52 by tbruins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_str_is_alpha(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (str[i] == '\0')
		j = 1;
	else if (str[i] != '\0')
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				j = 1;
			else if (str[i] >= 'A' && str[i] <= 'Z')
				j = 1;
			else
				return (0);
			i++;
		}
	}
	return (j);
}
