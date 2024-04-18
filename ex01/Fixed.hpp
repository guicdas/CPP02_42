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
		Fixed( const int n );
		Fixed( const float n );
		~Fixed();

		int			getRawBits( void ) const;
		void		setRawBits( int const raw );
		// Fixed		operator+( Fixed const & rhs) const;
		Fixed &		operator=( Fixed const & rhs);
		float		toFloat( void ) const;
		int			toInt( void ) const;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);