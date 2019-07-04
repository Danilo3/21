/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 03:36:18 by ayellin           #+#    #+#             */
/*   Updated: 2019/07/04 03:40:02 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

void ft_print_reverse_alphabet(void)
{
	char ch;

	ch = 'z';
	while (ch >= 'a')
	{
		ft_putchar(ch);
		ch--;
	}
	ft_putchar('\n');
}
