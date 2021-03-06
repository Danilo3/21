/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 07:48:16 by ayellin           #+#    #+#             */
/*   Updated: 2019/07/04 23:38:21 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char ch);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}

	int max_delim;
	int count_digits;

	count_digits = 0;
	max_delim = 1000000000;
	while ( max_delim < nb)
	{
		max_delim /= 10;
		count_digits ++;		
	}
	while (count_digits >= 0)
	{
		ft_putchar(nb / max_delim + 48);
		max_delim /= 10;
		nb /= 10;
		count_digits--;	
	}
}
