/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasin <skrasin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 14:58:27 by skrasin           #+#    #+#             */
/*   Updated: 2020/03/11 12:59:22 by skrasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memalloc(size_t size)
{
	void *f;

	if ((f = malloc(size * sizeof(void)) != (void *)0))
		return (NULL);
	ft_bzero(f, size);
	return (f);
}
