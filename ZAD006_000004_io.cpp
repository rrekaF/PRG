// ----------- ZAD4 -----------
//(io) Napisz program, który pobierze dwie liczby z klawiatury i doda je do siebie. Wynik wydrukuj na standardowe wyjście. Podawanie liczb powinno być odzielone naciśnięciem enter

//./sum ➞ 
//	Podaj liczbę: 2[ENTER]
//	Podaj kolejną liczbę: 4[ENTER]
//	Suma to 6


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char** argv) {
	int a = 0, b = 0;
	std::cin >> a >> b;
	std::cout << a + b;
}
// ROZWIĄZANIE KONIEC
