#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int value;
		static const int fractionalBits = 8;
	public:
		Fixed(void);
		Fixed(Fixed& other);
		Fixed& operator=(Fixed& other);
		~Fixed();
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw);
};

#endif