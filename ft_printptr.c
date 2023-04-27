/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:58:45 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/04/26 17:02:13 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(unsigned long long ptr)
{
	int	c;

	c = 0;
	c += ft_printstring("0x");
	c += ft_printhexa(ptr, 'x');
	return (c);
}
