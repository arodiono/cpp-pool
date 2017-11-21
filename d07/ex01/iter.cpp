#include <iostream>

template <typename Array>
void	iter(Array * array, int size, void (*func)(Array const &) ) {
	for (int i = 0; i < size; i++) {
		func(array[i]);
	}
}

template <typename T>
void print(T const & p) {
	std::cout << p;
}

int	main (void) {

	int			i[10] = {0,1,2,3,4,5,6,7,8,9};
	char		c[32] = "abcdefghijklmnopqrstuvwxyz";
	std::string	s[8] = {"Lorem ","ipsum ","dolor ","sit ","amet, ","consectetur ","adipiscing ","elit "};

	std::cout << "INT ";
	::iter(i, 10, print);
	std::cout << std::endl;
	std::cout << "CHAR ";
	::iter(c, 32, print);
	std::cout << std::endl;	
	std::cout << "STRING ";	
	::iter(s, 8, print);
	std::cout << std::endl;
	
}