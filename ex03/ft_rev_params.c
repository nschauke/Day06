/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschauke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:59:37 by nschauke          #+#    #+#             */
/*   Updated: 2020/07/16 13:06:38 by nschauke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main( int argc, char **argv)

{
	int x;
	argc--;

	x = 0;

	while(argc != 0)

	{
		while(argv[argc][x])

		{
			write(1, &argv[argc][x], 1);
		x++;
		
	}

	argc--;
	write(1, "", 1);
	x = 0;

}

}
