#include <unistd.h>

int	ft_putchar( char c )
{
	write(1, &c, 1);
	return (0);
}

#include "../../ex07/ft_print_combn.c"

int	main( void )
{
    write(1, "Number = 2; result:\n", 20);
	ft_print_combn(2);
    write(1, "Number = 10; result:\n", 21);
    ft_print_combn(10);
    write(1, "Number = 1; result:\n", 20);
    ft_print_combn(1);
    write(1, "Number = 0; result:\n", 20);
    ft_print_combn(0);
	return (0);
}
