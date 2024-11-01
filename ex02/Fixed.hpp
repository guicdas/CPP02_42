#pragma once

#include <iostream>
#include <cmath>

class Fixed{
	private:
		static const int	fractionBits = 8;
		int					value;

	public:
		Fixed( void );
		Fixed( int const );
		Fixed( float const );
		Fixed( Fixed const & );
		Fixed	&Fixed::operator=( Fixed const & );
		~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( int const );

	Fixed	operator+( Fixed const & ) const;
	Fixed	operator-( Fixed const & ) const;
	Fixed	operator*( Fixed const & ) const;
	Fixed	operator/( Fixed const & ) const;

	Fixed	operator>( Fixed const & ) const;
	Fixed	operator<( Fixed const & ) const;
	Fixed	operator>=( Fixed const & ) const;
	Fixed	operator<=( Fixed const & ) const;
	Fixed	operator!=( Fixed const & ) const;
	Fixed	operator==( Fixed const & ) const;

	Fixed	&operator++( void );
	Fixed 	operator++( int );
	Fixed	&operator--( void );
	Fixed 	operator--( int );

	static Fixed		&max( Fixed & , Fixed & );
	static const Fixed	&max( Fixed const & , Fixed const & );
	static Fixed		&min( Fixed & , Fixed & );	
	static const Fixed	&min( Fixed const & , Fixed const & );

	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream & operator<<( std::ostream & , Fixed const & );