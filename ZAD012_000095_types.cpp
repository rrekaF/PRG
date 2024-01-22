// ----------- ZAD95 -----------
//(types) Napisz program, który pobierze z parametrów liczbę RZECZYWISĄ i wydrukje liczbę o jeden większą. Wynik wydrukuj na standardowe wyjscie.

//./parametr 2345.123 ➞ WYDRUKUJE: "2346.123"
//./parametr -1000.9999 ➞ WYDRUKUJE: "-1000"


// ROZWIĄZANIE POCZATEK


#include <iostream>
int main(int argc, char** argv) {
	float num = 0;
	num = std::stof(argv[1]);
	std::cout << num + 1.0;
	return 0;
}
// ROZWIĄZANIE KONIEC
