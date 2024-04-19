#pragma once

#include <iostream>
#include <cmath>

class Fixed{
	private:
		int					value;
		static const int	fractionBits = 8;
	public:
		Fixed();
		Fixed( const Fixed &n );
		Fixed &		operator=( Fixed const & rhs);
		~Fixed();
		Fixed( const int n );
		Fixed( const float n );

		int			getRawBits( void ) const;
		void		setRawBits( int const raw );
		float		toFloat( void ) const;
		int			toInt( void ) const;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);