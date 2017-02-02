/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 14:55:16 by amusel            #+#    #+#             */
/*   Updated: 2017/01/29 14:55:18 by amusel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		specflag(const char *p, int *i, struct s_lis *temp)
{
	temp->specflag[0] = p[(*i)];
	temp->specflag[1] = '\0';
	if (temp->specflag[0] != '\0')
		return (((*i)++) - (*i) + 1);
	else
		return (((*i)--) - (*i) + 1);
}

int		widthmanagelsc(struct s_lis *temp)
{
	int i;
	int	width;

	i = 0;
	while (temp->lsc[i])
		i++;
	width = temp->lscwidth - i;
	if (width < 0)
		width = 0;
	return (width);
}

int		lsc(struct s_lis *temp, char *ret)
{
	int i;
	int k;
	int width;
	int flag;
	int count;

	count = 0;
	k = 0;
	i = 0;
	width = widthmanagelsc(temp);
	flag = width;
	while (k <= temp->j)
	{
		if (k == temp->lscpoint)
		{
			while (width-- > 0 && temp->lscprec > -1)
				write(1, " ", 1);
			while (temp->lsc[i])
				count += (int)ft_putchar_fd((const u_int32_t)temp->lsc[i++], 1);
		}
		if (ret[k] > 0)
			ft_putchar(ret[k]);
		k++;
	}
	return (flag + count + (int)ft_strlen(ret));
}

int		help(struct s_lis *temp, char *ret)
{
	int i;

	i = 0;
	if (temp->flag == 'S' || (temp->flag == 's' && temp->type[0] == 'l'))
		return (lsc(temp, ret));
	else if (ft_memchr(temp->mod, '-', 5) == 0 && \
			(temp->prec == -1 || temp->flag == 'c') && \
			temp->width > -1)
		temp->c = temp->c + temp->width - 1;
	if (temp->cflag > 0)
	{
		while (temp->j > i)
		{
			if (temp->c == i)
				ft_putchar('\0');
			ft_putchar(ret[i++]);
		}
		return ((int)ft_strlen(ret) + 1);
	}
	else
	{
		ft_putstr(ret);
		return ((int)ft_strlen(ret));
	}
}
