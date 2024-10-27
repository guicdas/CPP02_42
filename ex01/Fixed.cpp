#include "Fixed.hpp"

Fixed::Fixed( void ) : value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int n ){
	std::cout << "Int constructor called" << std::endl;
	this->value = (n << fractionBits);
}

Fixed::Fixed( const float n ){
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(n * (1 << fractionBits));
}

Fixed::Fixed( Fixed const &n ){
	std::cout << "Copy constructor called" << std::endl;
	*this = n;
}

Fixed::~Fixed( void ){
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=( Fixed const &f ){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &f)
		return (*this);
	this->value = f.value;
	return (*this);
}

int Fixed::getRawBits( void ) const{
	return (this->value);
}

void	Fixed::setRawBits( int const raw ){
	this->value = raw;
}

std::ostream &	operator<<( std::ostream &os , Fixed const &f ){
	os << f.toFloat() << std::endl;
    return (os);
}

float	Fixed::toFloat( void ) const{
	 return (static_cast<float> (this->getRawBits()) / (float)(1 << fractionBits));
}

int	Fixed::toInt( void ) const{
	return (this->value >> fractionBits);
}
