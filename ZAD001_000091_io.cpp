// ----------- ZAD91 -----------
//(io) Napisz program, który pobierze z parametrów liczbę całkowitą i wydrukje liczbę o jeden większą. Wynik wydrukuj na standardowe wyjscie.

//./parametr 2345 ➞ WYDRUKUJE: "2345"
//./parametr -1000 ➞ WYDRUKUJE: "-999"


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char** argv) {
	std::cout << std::stoi(argv[1]) + 1;
	return 0;
}
// ROZWIĄZANIE KONIEC
