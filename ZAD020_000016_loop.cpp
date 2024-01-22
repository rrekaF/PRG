// ----------- ZAD16 -----------
//(loop) Napisz program, który pobierze z parametrów liczbę naturalną w, reprezentującą długość ramienia. Wydrukuj trójkąt prostokątny równoramienny z gwiazdek o wymiarze podanym w parametrze

//./rectangulartriangle 3 ➞ WYDRUKUJE: 
//*
//**
//***


// ROZWIĄZANIE POCZATEK
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x = std::stoi(argv[1]);
	for(int i = 1; i <= x; i++){
		for(int j = 0; j < i; j++){
			std::cout << "*";
		}
		std::cout << "\n";
	}
	return 0;
}
// ROZWIĄZANIE KONIEC
