/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 16:26:27 by amusel            #+#    #+#             */
/*   Updated: 2017/02/02 17:34:40 by amusel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

struct			s_lis
{
	int			c;
	int			cflag;
	int			j;
	int			width;
	int			prec;
	char		flag;
	char		specflag[2];
	char		*str;
	char		type[3];
	char		mod[6];
	wchar_t		*lsc;
	int			lscpoint;
	int			lscwidth;
	int			lscprec;
};

char			*sc(va_list ap, struct s_lis *temp);
int				ft_printf(const char *restrict str, ...);
char			*solve(va_list ap, struct s_lis *temp, char *ret);
char			*idu(va_list ap, struct s_lis *temp);
char			*width(struct s_lis *temp, char *str);
char			*precision(struct s_lis *temp, char *str);
int				manageintmod(char *str, int *i, char *ret, struct s_lis *temp);
char			*ft_itoa_base_ll(long long int value, long long int base);
char			*ox(va_list ap, struct s_lis *temp);
char			*manageoflags(va_list ap, struct s_lis *temp);
char			*managexflags(va_list ap, struct s_lis *temp);
char			*ft_itoa_base_unsig(unsigned long long int value, int base);
int				help(struct s_lis *temp, char *ret);
int				specflag(const char *p, int *i, struct s_lis *temp);
#endif
