/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 19:38:04 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/05/12 19:54:52 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_reset_info(t_prog_info *info)
{
	info->min_width = 0;
	info->fl_minus = 0;
	info->fl_zero = 0;
	info->fl_point = 0;
	info->fl_hash = 0;
	info->fl_space = 0;
	info->fl_plus = 0;
	
}

static int	ft_save_fl_values(t_prog_info *info)
{
	int		len;
	char	*nb_str;
	int		ret_value;

	len = 0;
	info->i++;
	while (ft_isnumber(info->content[info->i + len]))
		len++;
	nb_str = ft_substr(info->content, info-> i, len);
	ret_value = ft_atoi(nb_str);
	free(nb_str);
	info->i += len;
	return (ret_value);
}

static void	ft_check_flags(t_prog_info *info)
{
	if (ft_isnumber(info->content[info->i]))
	{
		if (info->content[info->i] == '0')
			info->fl_zero = ft_save_fl_values(info);
		else
			info->min_width = ft_save_fl_values(info);
	}
	else if (info->content[info->i] == '-')
		info->fl_minus = ft_save_fl_values(info);
	else if (info->content[info->i] == '.')
		info->fl_point = ft_save_fl_values(info);
	else if (info->content[info->i] == '#')
		info->fl_hash = ft_save_fl_values(info);
	else if (info->content[info->i] == ' ')
		info->fl_space = ft_save_fl_values(info);
	else if (info->content[info->i] == '+')
		info->fl_plus = ft_save_fl_values(info);
}

void	ft_filter(t_prog_info *info)
{
	info->i++;
	ft_check_flags(info);
	if (info->content[info->i] == 'c')
		ft_print_char(info);
	else if (info->content[info->i] == 's')
		ft_print_str(info);
/* 	else if (info->content[info->i] == 'p')
		ft_print_pointer(info);
	else if (info->content[info->i] == 'd' || info->content[info->i] == 'i')
		ft_print_nbr(info, DEC);
	else if (info->content[info->i] == 'u')
		ft_print_unsigned(info);
	else if (info->content[info->i] == 'x')
		ft_print_nbr(info, MIN_HEX);
	else if (info->content[info->i] == 'X')
		ft_print_nbr(info, MIN_HEX);
	else if (info->content[info->i] == '%')
		ft_print_percent(info); */
	ft_reset_info(info);
}

int	ft_printf(const char *content, ...)
{
	t_prog_info	*info;
	int			res;

	info = malloc(sizeof(t_prog_info));
	if (!info)
		return (-1);
	ft_reset_info(info);
	info->content = content;
	info->i = 0;
	info->t_len = 0;
	va_start(info->args, content);
	while (info->content[info->i])
	{
		if (info->content[info->i] != '%')
			ft_putchar(info, info->content[info->i]);
		else
			ft_filter(info);
		info->i++;
	}
	res = info->t_len;
	free(info);
	return (res);
}
