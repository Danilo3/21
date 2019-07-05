#include <unistd.h>

int	ft_putchar( char c )
{
	write(1, &c, 1);
	return (0);
}

#include "../../ex05/ft_print_comb2.c"

int	main( void )
{
	ft_print_comb2();
	return (0);
}
