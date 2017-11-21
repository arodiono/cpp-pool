#include <iostream>

template <typename T>
T max(T const & x, T const & y) {
	return (x > y ? x : y);
}

template <typename T>
T min(T const & x, T const & y) {
	return (x < y ? x : y);
}

template <typename T>
void swap(T & x, T & y) {
	T tmp = x;
	x = y;
	y = tmp;
}

int main( void ) {
	int a = 2;
	int b = 3;	
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	float e = 42.42f;
	float f = 0.42f;
	::swap( e, f );	
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
	return 0;
	}