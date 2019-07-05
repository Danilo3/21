#include <unistd.h>

int	ft_putchar( char c )
{
	write(1, &c, 1);
	return (0);
}

#include "../../ex04/ft_print_comb.c"

int	main( void )
{
	ft_print_comb();
	return (0);
}
