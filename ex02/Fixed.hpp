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

		Fixed&	Fixed::operator=( Fixed const & rhs);

		int			getRawBits( void ) const;
		void		setRawBits( int const raw );

		Fixed		operator+( Fixed const & rhs) const;
		Fixed		operator-( Fixed const & rhs) const;
		Fixed		operator*( Fixed const & rhs) const;
		Fixed		operator/( Fixed const & rhs) const;

		Fixed		operator>( Fixed const & rhs) const;
		Fixed		operator<( Fixed const & rhs) const;
		Fixed		operator>=( Fixed const & rhs) const;
		Fixed		operator<=( Fixed const & rhs) const;
		Fixed 		operator!=( Fixed const & rhs) const;
		Fixed 		operator==( Fixed const & rhs) const;

		Fixed &		operator++(void);
		Fixed 		operator++(int);
		Fixed &		operator--(void);
		Fixed 		operator--(int);

		static Fixed &	max( Fixed & p1, Fixed & p2);
		static const Fixed &	max( Fixed const & p1, Fixed const & p2);
		static Fixed &	min( Fixed & p1, Fixed & p2);
		static const Fixed &	min( Fixed const & p1, Fixed const & p2);

		float		toFloat( void ) const;
		int			toInt( void ) const;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);