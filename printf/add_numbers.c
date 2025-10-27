/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_numbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:18:26 by scambier          #+#    #+#             */
/*   Updated: 2025/10/27 01:13:57 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "conversion_specification.h"

int	ft_nbrlen(t_uint64 n, t_uint32 base);

typedef struct s_base {
	char			*digits;
	t_uint32		size;
	char			*prefix;
}	t_base;

void	add_int_base_rec(t_strb *buffer, t_uint64 value, t_base *base)
{
	if (value >= base->size)
		add_int_base_rec(buffer, value / base->size, base);
	ft_strb_addchar(buffer, base->digits[value % base->size]);
}

void	add_int_base(t_strb *buffer, t_uint64 value, t_base *base, int prec)
{
	int	nbrlen;
	int	k;

	if (!prec && !value)
		return ;
	nbrlen = ft_nbrlen(value, base->size);
	k = -1;
	while (++k < (prec - nbrlen))
		ft_strb_addchar(buffer, base->digits[0]);
	add_int_base_rec(buffer, value, base);
}

void	add_int(t_strb *buffer, t_conv_spec *spec, int value)
{
	static t_base	base = {"0123456789", 10u, 0};
	int				number_len;
	char			padding;
	char			sign;
	int				has_prefix;

	padding = ' ' + !!(spec->flags & ZERO_PAD) * ('0' - ' ');
	sign = '-' + (value >= 0) * ((32 + !(spec->flags & SPACE) * (11)) - 45);
	number_len = ft_max(ft_nbrlen(ft_abs(value), base.size), spec->precision);
	has_prefix = spec->flags & (SIGNED | SPACE) || value < 0;
	if (has_prefix)
		number_len++;
	if (spec->precision == -1)
		spec->precision = 1;
	if (spec->field_width > 0 && value == 0 && spec->precision == 0)
		number_len--;
	if (has_prefix && (spec->flags & ZERO_PAD))
		ft_strb_addchar(buffer, sign);
	if (!(spec->flags & LEFT_ALIGN))
		ft_strb_setchars(buffer, padding, spec->field_width - number_len);
	if (has_prefix && !(spec->flags & ZERO_PAD))
		ft_strb_addchar(buffer, sign);
	add_int_base(buffer, (t_uint32)ft_abs(value), &base, spec->precision);
	if ((spec->flags & LEFT_ALIGN))
		ft_strb_setchars(buffer, padding, spec->field_width - number_len);
}

void	add_unsigned(t_strb *buffer, t_cs *spec, t_uint64 value, t_uint32 bi)
{
	static t_base	bases[] = {
	{"0123456789", 10u, ""},
	{"0123456789abcdef", 16u, "0x"},
	{"0123456789ABCDEF", 16u, "0X"}
	};
	int				number_len;
	char			padding;

	padding = ' ' + !!(spec->flags & ZERO_PAD) * ('0' - ' ');
	if (spec->precision == -1)
		spec->precision = 1;
	number_len = ft_max(ft_nbrlen(value, bases[bi].size), spec->precision);
	if (spec->flags & PREFIX && value != 0)
		number_len += ft_strlen(bases[bi].prefix);
	if (spec->field_width > 0 && value == 0 && spec->precision == 0)
		number_len--;
	if (spec->flags & ZERO_PAD && spec->flags & PREFIX && value != 0)
		ft_strb_addstr(buffer, bases[bi].prefix, ft_strlen(bases[bi].prefix));
	if (!(spec->flags & LEFT_ALIGN))
		ft_strb_setchars(buffer, padding, spec->field_width - number_len);
	if ((spec->flags & PREFIX) && !(spec->flags & ZERO_PAD) && value != 0)
		ft_strb_addstr(buffer, bases[bi].prefix, ft_strlen(bases[bi].prefix));
	add_int_base(buffer, value, bases + bi, spec->precision);
	if ((spec->flags & LEFT_ALIGN))
		ft_strb_setchars(buffer, padding, spec->field_width - number_len);
}

void	add_pointer(t_strb *buffer, t_conv_spec *spec, t_uint64 value)
{
	if (value)
	{
		spec->flags |= PREFIX;
		add_unsigned(buffer, spec, (t_uint64)value, 1);
		return ;
	}
	if (spec->flags & LEFT_ALIGN)
		ft_strb_addstr(buffer, "(nil)", 5);
	ft_strb_setchars(buffer, ' ', spec->field_width - 5);
	if (!(spec->flags & LEFT_ALIGN))
		ft_strb_addstr(buffer, "(nil)", 5);
}
