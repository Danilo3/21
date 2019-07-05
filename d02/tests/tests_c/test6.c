#include <unistd.h>

int	ft_putchar( char c )
{
	write(1, &c, 1);
	return (0);
}

#include "../../ex06/ft_putnbr.c"

int	main( void )
{
    write(1, "Number = 42; result = ", 22);
	ft_putnbr(42);
    write(1, "Number = 4242; result = ", 24);
    ft_putnbr(4242);
    write(1, "Number = 424242; result = ", 26);
    ft_putnbr(424242);
	return (0);
}
