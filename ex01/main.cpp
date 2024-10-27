#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const e( -42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	
	std::cout << "a is " << a;
	std::cout << "b is " << b;
	std::cout << "c is " << c;
	std::cout << "e is " << e;
	std::cout << "d is " << d;
	std::cout << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "e is " << e.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << "\n\n";
	return 0;
}