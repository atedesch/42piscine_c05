/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atedesch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:31:15 by atedesch          #+#    #+#             */
/*   Updated: 2023/11/04 21:32:51 by atedesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	rad_exp;

	rad_exp = 1;
	if (nb > 0)
	{
		while (rad_exp * rad_exp <= nb)
		{
			if (rad_exp * rad_exp == nb)
				return (rad_exp);
			if (rad_exp > 46340)
				return (0);
			rad_exp++;
		}
	}
	return (0);
}
