/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 19:20:37 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/05/12 18:44:33 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>

# define MIN_SET "0123456789abcdef"
# define MAY_SET "0123456789ABCDEF"

typedef	enum e_set
{
	DEC = 0,
	MIN_HEX,
	MAY_HEX
}	t_set;

typedef enum e_type
{
	C = 0,
	S,
	P,
	D,
	I,
	U,
	X_may,
	X_min,
	PERC
}	t_type;

typedef struct s_prog_info
{
	const char	*content;
	int			i;
	va_list		args;
	int			min_width;
	int			fl_minus;
	int			fl_zero;
	int			fl_point;
	int			fl_hash;
	int			fl_space;
	int			fl_plus;
	int			t_len;
}	t_prog_info;

int	ft_printf(const char *content, ...);

//	ft_print_char.c
void	ft_putchar(t_prog_info *info, char c);
void	ft_print_char(t_prog_info *info);

//	ft_printf_utils.c
bool	ft_isnumber(char c);
char	*ft_substr(const char *s, int i, int l);
int		ft_strlen(char *s);
int		ft_atoi(const char *str);

//	ft_print_str.c
void	ft_print_str(t_prog_info *info);

//	buffer_check.c
void	get_buffer(t_prog_info *info, char *buffer, t_type type);

#endif