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
		Fixed	&operator=( Fixed const & );
		~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( int const );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);