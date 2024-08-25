#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int value;
		static const int fractionalBits = 8;
	public:
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& other);
		~Fixed();
		
		Fixed& operator=(const Fixed& other);

		float operator+(const Fixed& other)const;
		float operator-(const Fixed& other)const;
		float operator*(const Fixed& other)const;
		float operator/(const Fixed& other)const;

		Fixed operator++(void);
		Fixed operator--(void);

		Fixed operator++(int);
		Fixed operator--(int);

		bool operator>(const Fixed& other)const;
		bool operator<(const Fixed& other)const;
		bool operator>=(const Fixed& other)const;
		bool operator<=(const Fixed& other)const;
		bool operator==(const Fixed& other)const;
		bool operator!=(const Fixed& other)const;

		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed& min(Fixed& a, Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif