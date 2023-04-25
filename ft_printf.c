/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:57:56 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/04/25 18:20:24 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printstring(char c)
{
	ft_putchar(c);
}

void	ft_printptr(char c)
{
	ft_putchar(c);
}

void	ft_printdec(char c)
{
	ft_putchar(c);
}

void	ft_printunsigned(char c)
{
	ft_putchar(c);
}

void	ft_printhexminus(char c)
{
	ft_putchar(c);
}

void	ft_printhexmayus(char c)
{
	ft_putchar(c);
}

void	ft_printperc(char c)
{
	ft_putchar(c);
}

void	ft_filter(char const *content, int i, va_list *args)
{
	if (content[i] == 'c')
		ft_printchar(va_arg(*args, int));
 	if (content[i] == 's')
		ft_printstring(*args, char *);
	if (content[i] == 'p')
		ft_printptr('x');
	if (content[i] == 'd')
		ft_printdec('x');
	if (content[i] == 'i')
		ft_printdec('x');
	if (content[i] == 'u')
		ft_printunsigned('x');
	if (content[i] == 'x')
		ft_printhexminus('x');
	if (content[i] == 'X')
		ft_printhexmayus('x');
	if (content[i] == '%')
		ft_printperc('x');
}

void	ft_printf(char const *content, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, content);
	while (content[i])
	{
		if (content[i] != '%')
		{
			ft_putchar(content[i]);
		}
		else
		{
			i++;
			ft_filter(content, i, &args);
		}
		i++;
	}
	va_end(args);
}

int	main(void)
{
	char	c;

	c = 'X';
	ft_printf("hol%ca que tal%c", c, c);
	return (0);
}
