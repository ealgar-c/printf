/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:58:28 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/04/25 19:29:45 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstring(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_printstring("(null)"));
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}
