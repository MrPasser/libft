/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:03:33 by svet              #+#    #+#             */
/*   Updated: 2021/04/24 13:10:00 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

int ft_vector_swap(t_vector *v, t_vector *w)
{
	const size_t	size = v->size;
	long double		*d1;
	long double		*d2;
	size_t			i;
	long double		tmp;

	if (size != w->size)
		return (-1);
	d1 = v->content;
	d2 = w->content;
	i = 0;
	while (i < size)
	{
		tmp = d1[i];
		d1[i] = d2[i];
		d2[i] = tmp;
		++i;
	}
	return (0);
}
