// ----------- ZAD92 -----------
//(io) Napisz program, który pobierze liczbę całkowitą z klawiatury i wydrukje liczbę o jeden większą. Wynik wydrukuj na standardowe wyjście. Podawanie liczb powinno być odzielone naciśnięciem enter

//./keys ➞ 
//	Podaj liczbę: 456[ENTER]
//	Inkrementacja to 457


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char** argv) {
	int input = 0;
	std::cin >> input;
	std::cout << input + 1;
	return 0;
}


// ROZWIĄZANIE KONIEC
