#pragma once

#include <iostream>

class Fixed{
	private:
		static int const	fractionBits = 8;
		int					value;

	public:
		Fixed( void );
		Fixed::Fixed( int const raw );
		Fixed( const Fixed & );
		Fixed	&operator=( Fixed const & );
		~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( int const );
};

std::ostream &operator<<( std::ostream &os, Fixed &f );
