/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 13:58:44 by amusel            #+#    #+#             */
/*   Updated: 2016/12/07 15:40:37 by amusel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strclr(char *s)
{
	int		i;
	char	*temp;

	temp = NULL;
	if (s)
	{
		i = (int)ft_strlen(s);
		temp = (char *)malloc(sizeof(temp) * i);
		while (i >= 0)
		{
			temp[i] = '\0';
			i--;
		}
	}
	s = temp;
	return (s);
}
