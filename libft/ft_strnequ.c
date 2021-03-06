/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrepak <nrepak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 21:42:01 by nrepak            #+#    #+#             */
/*   Updated: 2017/11/19 13:06:43 by nrepak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	if (!n)
		return (1);
	while (*s1 == *s2 && *s1 && *s2 && n - 1)
	{
		s1++;
		s2++;
		n--;
	}
	if (*s1 - *s2 == 0)
		return (1);
	else
		return (0);
}
