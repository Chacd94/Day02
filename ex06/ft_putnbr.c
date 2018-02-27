/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 09:55:50 by cdupuis           #+#    #+#             */
/*   Updated: 2018/02/10 10:38:37 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		compteur(int n)
{
	int m;
	int cpt;

	cpt = 0;
	while (n >= 10)
	{
		cpt++;
		m = n % 10;
		n = (n - m) / 10;
	}
	return (cpt);
}

int		puiss(int n)
{
	int r;
	int i;

	i = 1;
	r = 1;
	while (i <= n)
	{
		r = r * 10;
		i++;
	}
	return (r);
}

void	ft_putnbr2(int n)
{
	int i;
	int count;

	count = compteur(n);
	i = 0;
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr2(-1 * n);
	}
	if (n <= 9)
	{
		ft_putchar(n + '0');
	}
	else
	{
		while (i <= count)
		{
			ft_putchar(n / (puiss(count - i)) + '0');
			n = n % puiss(count - i);
			i++;
		}
	}
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar(2 + '0');
		ft_putchar(1 + '0');
		ft_putchar(4 + '0');
		ft_putchar(7 + '0');
		ft_putchar(4 + '0');
		ft_putchar(8 + '0');
		ft_putchar(3 + '0');
		ft_putchar(6 + '0');
		ft_putchar(4 + '0');
		ft_putchar(8 + '0');
	}
	else
	{
		ft_putnbr2(n);
	}
}
