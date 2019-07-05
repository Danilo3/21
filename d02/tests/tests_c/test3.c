#include <unistd.h>

int	ft_putchar( char c )
{
	write(1, &c, 1);
	return (0);
}

#include "../../ex03/ft_is_negative.c"

int	main( void )
{
    int i;
    
    i = 0;
    write (1, "Variable = 0; result = ", 23);
    ft_is_negative(i);
    i = -10;
    write (1, "Variable = -10; result = ", 25);
	ft_is_negative(i);
    i = 10;
    write (1, "Variable = 10; result = ", 24);
    ft_is_negative(i);
	return (0);
}
