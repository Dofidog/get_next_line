/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaaso <tpaaso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 15:55:21 by tpaaso            #+#    #+#             */
/*   Updated: 2019/10/29 13:40:31 by tpaaso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if (ft_isalpha(c))
		return (1);
	if (ft_isdigit(c))
		return (1);
	else
		return (0);
}