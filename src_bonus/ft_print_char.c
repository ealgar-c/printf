/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 19:54:44 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/05/12 18:32:32 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_putchar(t_prog_info *info, char c)
{
	write(1, &c, 1);
	info->t_len++;
}

void	ft_print_char(t_prog_info *info)
{
	(void)info;
}