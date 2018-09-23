/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 20:26:03 by glatega           #+#    #+#             */
/*   Updated: 2018/08/23 06:14:00 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		check_int_max_min(char *str, char sign)
{
	int		nbr;
	char	*small;

	if (ft_strlen(str) > 10)
		return (0);
	else
	{
		small = ft_strnew(9);
		nbr = ft_atoi(ft_strncpy(small, str, 9));
		free(small);
		if (nbr < 214748364)
			return (1);
		if (nbr == 214748364)
		{
			if (sign == '-' && ft_atoi(&str[9]) <= 8)
				return (1);
			else if (ft_atoi(&str[9]) <= 7)
				return (1);
			return (0);
		}
		return (0);
	}
}

int		valid_int(char *str)
{
	char	*valint;
	char	sign;

	sign = '+';
	if (!ft_isdigit(*str))
	{
		if (*str != '-' && *str != '+')
			return (0);
		else
		{
			sign = *str;
			str++;
		}
	}
	valint = str;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (check_int_max_min(valint, sign));
}
