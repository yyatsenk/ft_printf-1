/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 16:09:00 by amusel            #+#    #+#             */
/*   Updated: 2016/12/08 16:35:47 by amusel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t j)
{
	unsigned char	*ptr;
	size_t			k;

	k = 0;
	ptr = (unsigned char *)str;
	while (k < j)
	{
		ptr[k] = '\0';
		k++;
	}
}
