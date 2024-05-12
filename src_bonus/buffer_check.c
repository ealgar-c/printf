/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 12:05:34 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/05/12 19:51:43 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static void	add_chars(t_prog_info *info, int l, char c)
{
	int	i;

	i = 0;
	while (i++ < l)
		ft_putchar(info, c);
}

void	ft_print_buffer(t_prog_info *info, char *buffer)
{
	int	i;
	int len;

	len = ft_strlen(buffer);
	i = 0;
	while (i < len)
	{
		ft_putchar(info, buffer[i]);
		i++;
	}
}

void	get_buffer(t_prog_info *info, char *buffer, t_type type)
{
	(void)type;
	if (info->min_width != 0 && ft_strlen(buffer) > info->min_width)
	{
		add_chars(info, info->min_width - ft_strlen(buffer), ' ');
		ft_print_buffer(info, buffer);
	}
	else if (info->fl_minus != 0 && ft_strlen(buffer) > info->min_width)
	{
		ft_print_buffer(info, buffer);
		add_chars(info, info->min_width - ft_strlen(buffer), ' ');
	}
	else if (info->fl_zero != 0 && ft_strlen(buffer) > info->min_width)
	{
		add_chars(info, info->fl_zero - ft_strlen(buffer), '0');
		ft_print_buffer(info, buffer);
	}
	else
		ft_print_buffer(info, buffer);
}
