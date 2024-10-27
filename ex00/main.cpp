#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed b( a );
	Fixed d( 12 );
	Fixed c;
	c = b;
	std::cout << a;
	std::cout << b;
	std::cout << c;
	std::cout << c;
}