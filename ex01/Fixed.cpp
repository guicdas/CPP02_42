#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called\n";
	this->value = 0;
}

Fixed::Fixed( const Fixed &n ){
	std::cout << "Copy constructor called\n";
	*this = n;
	//std::cout << "Fixed value: " << this->value << std::endl;
}

Fixed::Fixed( const int n ){
	std::cout << "Int constructor called\n";
	this->value = (n << fractionBits);
	//std::cout << n << " => " << this->value << std::endl;
}

Fixed::Fixed( const float n ){
	std::cout << "Float constructor called\n\n";

	this->value = roundf(n * 256);
	//std::cout << "f value : " << this->value << "\n";
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

Fixed &	Fixed::operator=( Fixed const & rhs){
	if ( this != &rhs )//????????????
        this->value = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const{
	return (this->value);
}

void Fixed::setRawBits(int const raw){
	this->value = raw;
}

std::ostream &	operator<<( std::ostream & o , Fixed const & rhs){
	  o << rhs.toFloat();
    return o;
}

float	Fixed::toFloat( void ) const{
	 return static_cast<float>( this->getRawBits() ) / ( 1 << fractionBits	 );
}

int	Fixed::toInt( void ) const{
	return this->value >> fractionBits;
}

// Fixed Fixed::operator+( Fixed const & rhs) const{
// 	std::cout << "Addition operator called with " << this->value;
// 	std::cout << " and " << rhs.getRawBits() << std::endl;

// 	return Fixed(this->value + rhs.getRawBits() );
// }