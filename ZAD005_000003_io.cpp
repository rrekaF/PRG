// ----------- ZAD3 -----------
//(io) Napisz program, który pobierze z parametrów dwie liczby i doda je do siebie. Wynik wydrukuj na standardowe wyjscie.

//./sum 2 4 ➞ WYDRUKUJE: "6"
//./sum 2 -4 ➞ WYDRUKUJE: "-2"


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char** argv) {
	std::cout << std::stoi(argv[1]) + std::stoi(argv[2]);
}

// ROZWIĄZANIE KONIEC
