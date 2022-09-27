/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luproven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:17:04 by luproven          #+#    #+#             */
/*   Updated: 2022/09/27 17:26:24 by luproven         ###   ########.fr       */
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

	a = argc - 1;
	while (a > 0)
	{
		i = 0;
		while (argv[a][i] != '\0' && argc)
		{
			ft_putchar(argv[a][i]);
			i++;
		}
		ft_putchar('\n');
		a--;
	}
	return (0);
}
