#pragma once

#include <iostream>

class Fixed{
	private:
		int value;
		static const int	fractionBits = 8;
	public:
		Fixed();
		Fixed( const Fixed &n );
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		// Fixed		operator+( Fixed const & rhs) const;
		Fixed &		operator=( Fixed const & rhs);
};

// std::ostream & operator<<( std::ostream & o, Fixed const & rhs);