// ----------- ZAD5 -----------
//(io) Napisz program, który wydrukuje wszytkie pobrane parametry po spacjach. Wynik wydrukuj na standardowe wyjście

//./print jestem wesoly romek ➞ WYDRUKUJE: "jestem wesoly romek"


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char** argv) {
	for(int i = 1; i < argc; i++){
		std::cout << argv[i] << " ";
	}
}
// ROZWIĄZANIE KONIEC
