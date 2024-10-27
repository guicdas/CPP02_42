#include "Fixed.hpp"

Fixed::Fixed( void ) : value(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed( int const raw ) : value(raw){
	std::cout << "Constructor called with " << raw << " value \n";
}

Fixed::Fixed( Fixed const &f ){
	std::cout << "Copy constructor called\n";
	// this->value = n.getRawBits();
	*this = f;
}


Fixed	&Fixed::operator=( Fixed const &f ){
	std::cout << "Copy assignment operator called\n";
	if (this == &f)
		return (*this);
	this->value = f.value;
	return (*this);
}

Fixed::~Fixed( void ){
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits( void ) const{
	std::cout << "GetRawBits member function called\n";
	return (this->value);
}

void	Fixed::setRawBits( int const raw ){
	this->value = raw;
}

std::ostream &operator<<( std::ostream &os, Fixed &f ){
	os << f.getRawBits() << std::endl;
		
	return (os);
}