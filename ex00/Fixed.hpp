#pragma once

#include <iostream>

class Fixed{
	private:
		int value;
		static const int	fractionBits = 8;
	public:
		Fixed();
		Fixed( const Fixed &n );
		Fixed &		operator=( Fixed const & rhs);
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};
