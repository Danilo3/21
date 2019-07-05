#include <unistd.h>

int	ft_putchar( char c )
{
	write(1, &c, 1);
	return (0);
}

#include "../../ex02/ft_print_numbers.c"

int	main( void )
{
	ft_print_numbers();
	return (0);
}
