/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 03:56:13 by ayellin           #+#    #+#             */
/*   Updated: 2019/07/04 06:57:51 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void ft_print_comb(void)
{
	int n;
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;
	while(a < 10)
	{
		while (b < 10) 
		{
			while (c < 10)
		   	{
				
				if (a != b && b !=c && c != a)
				{
					ft_putchar(a + 48);
					ft_putchar(b + 48);
					ft_putchar(c + 48);
					ft_putchar(',');
					ft_putchar(' ');
				}
				c++;
			}
			b++;	
		}
		a++;
	}
}
