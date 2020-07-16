/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschauke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:33:44 by nschauke          #+#    #+#             */
/*   Updated: 2020/07/16 12:42:20 by nschauke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putchar(char c)

{
	write(1,&c,1);

}

int 	main ( int argc, char *argv[0])
{
	int x;
	x = 0;
if (argc == 1)

{
	while (argv[0][x])
		ft_putchar(argv[0][x++]);

	ft_putchar('\n');

}
return (0);

}


		
