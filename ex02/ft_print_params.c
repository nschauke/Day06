/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschauke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:50:42 by nschauke          #+#    #+#             */
/*   Updated: 2020/07/16 12:55:59 by nschauke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar( char c)

{ 
	write(1, &c, 1);

}

int main ( int argc, char *argv[])

{
	int x = 0;
	int y = 1;
	while(--argc)

	{
		while(argv[y][x])
			ft_putchar(*argv[x]);

		x = 0;
		y+= 1;
		ft_putchar('\n');

	}
	return 0;

}
