#include "Fixed.hpp"

int main( void ) 
{
	// /*
	Fixed a;
	Fixed const ac(4.04f);
	Fixed b(3);
	Fixed const bc( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "a: " << a << " ac: " << ac << " b: " << b << "  bc: " << bc << "\n\n";
	
	std::cout << "//\tIncrement - Decrement\t//\n";
	std::cout << "a: " << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << "a: " << a << "\n\n";
	
	std::cout << "//\tArithmetic\t//\n";
	std::cout << b + bc << std::endl;
	std::cout << b - bc << std::endl;
	std::cout << b * bc << std::endl;
	std::cout << b / bc << "\n\n";
	std::cout << b / 0 << "\n\n";

	std::cout << "//\tComparisons\t//\n";
	std::cout << (b > bc) << "\t" << (bc > b) << std::endl;
	std::cout << (b < bc) << "\t" << (bc < b) << std::endl;
	std::cout << (b >= bc) << "\t" << (bc >= b) << std::endl;
	std::cout << (b <= bc) << "\t" << (bc <= b) << std::endl;
	std::cout << (b == bc) << "\t" << (bc == b) << std::endl;
	std::cout << (b != bc) << "\t" << (bc != b) << "\n\n";

	std::cout << (Fixed(3) == b) << "\t" << (Fixed(3.02f) == b) << std::endl;
	std::cout << (b != Fixed(3)) << "\t" << (b != Fixed(3.02f)) << "\n\n";

	std::cout << "//\tMin/Max functions\t//\n";
	std::cout << "max:\t\t" << Fixed::max( a, b ) << std::endl;
	std::cout << "min:\t\t" << Fixed::min( a, b ) << std::endl;
	std::cout << "max const:\t" << Fixed::max( ac, bc ) << std::endl;
	std::cout << "min const:\t" << Fixed::min( ac, bc ) << std::endl;
	// */
	 /*
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	 */
	return 0;

}
