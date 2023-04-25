/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 19:24:20 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/04/25 19:24:46 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>

int	ft_printf(char const *content, ...);
int	ft_printchar(char c);
int	ft_printdec(int nb);
int	ft_printhexmayus(char c);
int	ft_printhexminus(char c);
int	ft_printptr(long long int ptr);
int	ft_printstring(char *str);
int	ft_printunsigned(unsigned int uns);
int	ft_putchar(char c);
#endif