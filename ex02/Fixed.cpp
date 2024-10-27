#include "Fixed.hpp"

Fixed::Fixed( void ) : value(0){}

Fixed::Fixed( Fixed const &n ){
	*this = n;
}

Fixed&	Fixed::operator=( Fixed const &f ){
	if (this == &f)
		return (*this);
	this->value = f.value;
	return (*this);
}

Fixed::Fixed( const int n ) : value(n << fractionBits){}

Fixed::Fixed( const float n ) :value(roundf(n * (1 << fractionBits))){}

Fixed::~Fixed( void ){}

int Fixed::getRawBits(void) const{
	return (this->value);
}

void Fixed::setRawBits(int const raw){
	this->value = raw;
}

std::ostream &	operator<<( std::ostream & o , Fixed const & rhs){
	o << rhs.toFloat();
    return (o);
}

float	Fixed::toFloat( void ) const{
	return ((float)( this->getRawBits() ) / ( 1 << fractionBits));
}

int	Fixed::toInt( void ) const{
	return (this->value >> fractionBits);
}

//------------------------------------------//

Fixed Fixed::operator+( Fixed const & rhs) const{
 	std::cout << "Arithmetic operator: " << this->toFloat() \
	<< " + " << rhs.toFloat() << " -> ";

	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-( Fixed const & rhs) const{
 	std::cout << "Arithmetic operator: " << this->toFloat() \
	<< " - " << rhs.toFloat() << " -> ";

	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*( Fixed const & rhs) const{
 	std::cout << "Arithmetic operator: " << this->toFloat() \
	<< " * " << rhs.toFloat() << " -> ";

	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/( Fixed const & rhs) const{
 	std::cout << "Arithmetic operator: " << this->toFloat() \
	<< " / " << rhs.toFloat() << " -> ";

	return (Fixed(this->toFloat() / rhs.toFloat()));
}

//--------------------------------------------//

Fixed Fixed::operator>( Fixed const & rhs) const{
 	std::cout << "Comparison operator: " << this->toFloat() \
	<< " > " << rhs.toFloat() << " -> ";
	if (this->toFloat() > rhs.toFloat())
		return 1;
	return 0;
}

Fixed Fixed::operator<( Fixed const & rhs) const{
 	std::cout << "Comparison operator: " << this->toFloat() \
	<< " < " << rhs.toFloat() << " -> ";
	if (this->toFloat() < rhs.toFloat())
		return 1;
	return 0;
}

Fixed Fixed::operator>=( Fixed const & rhs) const{
 	std::cout << "Comparison operator: " << this->toFloat() \
	<< " >= " << rhs.toFloat() << " -> ";
	if (this->toFloat() >= rhs.toFloat())
		return 1;
	return 0;
}

Fixed Fixed::operator<=( Fixed const & rhs) const{
 	std::cout << "Comparison operator: " << this->toFloat() \
	<< " <= " << rhs.toFloat() << " -> ";
	if (this->toFloat() <= rhs.toFloat())
		return 1;
	return 0;
}

Fixed Fixed::operator==( Fixed const & rhs) const{
 	std::cout << "Comparison operator: " << this->toFloat() \
	<< " == " << rhs.toFloat() << " -> ";
	if (this->toFloat() == rhs.toFloat())
		return 1;
	return 0;
}

Fixed Fixed::operator!=( Fixed const & rhs) const{
 	std::cout << "Comparison operator: " << this->toFloat() \
	<< " != " << rhs.toFloat() << " -> ";
	if (this->toFloat() != rhs.toFloat())
		return 1;
	return 0;
}

//--------------------------------------//

Fixed&   Fixed::operator++( void ) {
	std::cout << "++_ operator: ";
    ++this->value;
    return *this;
}

Fixed   Fixed::operator++( int ) {
	std::cout << "_++ operator: ";
    Fixed tmp( *this );
    tmp.value = this->value++;
    return tmp;
}

Fixed&   Fixed::operator--( void ) {
	std::cout << "--_ operator: ";
    --this->value;
    return *this;
}

Fixed   Fixed::operator--( int ) {
	std::cout << "_-- operator: ";
    Fixed tmp( *this );
    tmp.value = this->value--;
    return tmp;
}

//--------------------------------------//

Fixed&	Fixed::min( Fixed & p1, Fixed & p2 ){
	std::cout << "Checking min between " << p1.toFloat() << " and " << p2.toFloat() << " -> ";
	if (p1.getRawBits() > p2.getRawBits())
		return (p2);
	return (p1);
}

const Fixed&	Fixed::min( Fixed const & p1, Fixed const & p2 ){
	std::cout << "Checking min between " << p1.toFloat() << " and " << p2.toFloat() << " -> ";
	if (p1.getRawBits() > p2.getRawBits())
		return (p2);
	return (p1);
}

Fixed&	Fixed::max( Fixed & p1, Fixed & p2 ) {
	std::cout << "Checking max between " << p1.toFloat() << " and " << p2.toFloat() << " -> ";
	if (p1.getRawBits() > p2.getRawBits())
		return (p1);
	return (p2);
}
const Fixed&	Fixed::max( Fixed const & p1, Fixed const & p2 ) {
	std::cout << "Checking max between " << p1.toFloat() << " and " << p2.toFloat() << " -> ";
	if (p1.getRawBits() > p2.getRawBits())
		return (p1);
	return (p2);
}