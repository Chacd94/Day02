/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 16:46:02 by cdupuis           #+#    #+#             */
/*   Updated: 2018/02/08 22:50:39 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char n);

void	print_nb2(char i, char j, char k, char l)
{
	while (l <= '9')
	{
		ft_putchar(i);
		ft_putchar(j);
		ft_putchar(' ');
		ft_putchar(k);
		ft_putchar(l);
		if (!(i == '9' && j == '8'))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		l++;
	}
}

void	print_condition(char i, char j, char k, char l)
{
	if (j <= '8')
	{
		l = j + 1;
		k = i;
	}
	else
	{
		l = '0';
		k = i + 1;
	}
	while (k <= '9')
	{
		print_nb2(i, j, k, l);
		l = '0';
		k++;
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;
	int k;
	int l;

	i = '0';
	j = '0';
	k = '0';
	l = '1';
	while (i <= '9')
	{
		while (j <= '9')
		{
			print_condition(i, j, k, l);
			j++;
		}
		j = '0';
		i++;
	}
}
