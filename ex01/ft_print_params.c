/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luproven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:58:14 by luproven          #+#    #+#             */
/*   Updated: 2022/09/27 15:43:09 by luproven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	a;

	a = 1;
	while (a < argc)
	{
		i = 0;
		while (argv[a][i] != '\0')
		{
			ft_putchar(argv[a][i]);
			i++;
		}
		ft_putchar('\n');
		a++;
	}
	return (0);
}
