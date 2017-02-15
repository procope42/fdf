/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsetc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <abarriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 23:55:19 by abarriel          #+#    #+#             */
/*   Updated: 2017/01/11 22:45:29 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_strsetc(char *s, int c, int n)
{
	s = ft_strnew(n);
	if (n <= 0)
		return (s);
	while (n != '\0')
	{
		n--;
		s[n] = c;
	}
	return (s);
}