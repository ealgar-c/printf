/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 11:52:34 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/05/12 19:51:55 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"
#include <stdio.h>
void	ft_print_str(t_prog_info *info)
{
	char	*str_arg;

	str_arg = va_arg(info->args, char *);
	if (!str_arg)
		str_arg = "(null)";
	get_buffer(info, str_arg, S);
}
