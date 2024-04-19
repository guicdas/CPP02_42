#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called\n";
	this->value = 0;
}

Fixed::Fixed( const Fixed &n ){
	std::cout << "Copy constructor called\n";
	*this = n;
}

Fixed::Fixed( const int n ){
	std::cout << "Int constructor called\n";
	this->value = (n << fractionBits);
}

Fixed::Fixed( const float n ){
	std::cout << "Float constructor called\n\n";
	this->value = roundf(n * (1 << fractionBits));
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

Fixed &	Fixed::operator=( Fixed const & rhs){
	std::cout << "Copy assignment operator called\n";
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
	 return (float) (this->getRawBits()) / (float)(1 << fractionBits);
}

int	Fixed::toInt( void ) const{
	return this->value >> fractionBits;
}
