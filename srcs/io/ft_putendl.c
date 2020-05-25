/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 21:38:58 by skrasin           #+#    #+#             */
/*   Updated: 2020/05/18 15:34:13 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"
#include <sys/_types/_null.h>

void	ft_putendl(char const *s)
{
	if (s == NULL)
		return ;
	ft_putstr(s);
	ft_putchar('\n');
}
