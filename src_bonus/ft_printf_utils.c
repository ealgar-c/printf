/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 20:45:04 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/05/12 18:42:58 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

bool	ft_isnumber(char c)
{
	if (c >= '0' && c <= '9')
		return (true);
	return (false);
}

char	*ft_substr(const char *s, int i, int l)
{
	char	*str;
	int		j;

	j = 0;
	str = malloc(l + 1);
	if (!str)
		return (NULL);
	while (j++ < l)
		str[j] = s[i + j];
	str[j] = '\0';
	return (str);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sn;
	int	num;

	i = 0;
	sn = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-')
		sn *= -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (str[i] - 48) + (num * 10);
		i++;
	}
	num *= sn;
	return (num);
}
