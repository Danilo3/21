/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 03:56:13 by ayellin           #+#    #+#             */
/*   Updated: 2019/07/04 04:20:04 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void ft_print_comb(void)
{
	int n;
	int a;
	int b;
	int c;

	n = 12;
	while (n <= 789)
	{
		a = n / 100;
		b = ( n / 10 ) % 10;
		c = n % 10;
		
		if (a < b && b < c)
		{
			ft_putchar(48 + a);
			ft_putchar(48 + b);
			ft_putchar(48 + c);
			if (n != 789)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}		
		n++;
	}
}
