/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschauke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:58:05 by nschauke          #+#    #+#             */
/*   Updated: 2020/07/16 12:01:46 by nschauke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putstr(char *str)

	void putchar( char c);

{
	int x;
	x = 0;

	while( str[x])

		ft_putchar(str[x++]);

}

