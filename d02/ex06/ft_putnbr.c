/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 07:48:16 by ayellin           #+#    #+#             */
/*   Updated: 2019/07/04 08:07:42 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	putchar(char ch);

int pow(int base, int n)
{

}


void print_number(int num, int digits_count)
{
	int i;

	i = 10 ;
	while ()
	{

	}
}


void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
	}

	int count_digits;
	int copy_nb;

	copy_nb = nb;
	count_digits = 0;
	while (copy_nb / 10 != 0)
	{
		copy_nb /= 10;
		count_digits ++;		
	}
	ft_putchar();

}
