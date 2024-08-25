#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point(void);
		Point(const Fixed x, const Fixed y);
		Point(const Point& other);
		~Point();
		
		Point& operator=(const Point& other);

		Fixed getX(void) const;
		Fixed getY(void) const;
		Fixed setX(const Fixed x);
		Fixed setY(const Fixed y);
};