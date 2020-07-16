/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschauke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:03:09 by nschauke          #+#    #+#             */
/*   Updated: 2020/07/16 12:18:48 by nschauke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
	int x;
	a = 0;

	while (s1[x])
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
		a++;
	}
	return (s1[x] - s2[x]);

}

int main()
{
 char str[] = "B";
 char to_find[] = "A";
 
 printf("%d\n", ft_strcmp(str, to_find));
 
 return(0);
}

