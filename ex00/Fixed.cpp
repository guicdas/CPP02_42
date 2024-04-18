#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called\n";
	this->value = 0;
}

Fixed::Fixed( const Fixed &n ){
	std::cout << "Copy constructor called\n";
	this->value = n.getRawBits();
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

Fixed &	Fixed::operator=( Fixed const & rhs){
	this->value = rhs.getRawBits();

	return *this;
}

// Fixed Fixed::operator+( Fixed const & rhs) const{
// 	std::cout << "Addition operator called with " << this->value;
// 	std::cout << " and " << rhs.getRawBits() << std::endl;

// 	return Fixed(this->value + rhs.getRawBits() );
// }

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called\n";
	return (this->value);
}

void Fixed::setRawBits(int const raw){
	this->value = raw;
}

// std::ostream &	operator<<( std::ostream & o , Fixed const & rhs){
// 	o << rhs.getRawBits();
// 	return (o);
// }