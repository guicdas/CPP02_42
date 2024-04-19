#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called\n";
	this->value = 0;
}

Fixed::Fixed( const Fixed &n ){
	std::cout << "Copy constructor called\n";
	// this->value = n.getRawBits();
	*this = n;
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
	std::cout << "GetRawBits member function called\n";
	return (this->value);
}

void Fixed::setRawBits(int const raw){
	this->value = raw;
}
