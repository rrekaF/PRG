// ----------- ZAD6 -----------
//(io) Napisz program, który pobierze z parametru pin, następnie będzie prosił o wpisanie pinu do czasu aż urzytkownik wprowadzi pin podany w parametrze programu, wtedy wyswietli "Poprawny pin" i zakończy działanie programu

//./pass 1234 ➞ 
//	Podaj pin: 4321
//	Błędny pin
//	Podaj pin: 123
//	Błędny pin
//	Podaj pin: 1234
//	Poprawny pin


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char** argv) {
	
	bool entered = false;
	std::string userPin = "", correctPin = argv[1];
	while(!entered){
		std::cout << "Podaj pin: ";
		std::cin >> userPin;
		
		if (userPin == correctPin){
			entered = true;
			std::cout << "Poprawny pin";
		} else {
			std::cout << "Błędny pin\n";
		}
		
	}
	return 0;
}


// ROZWIĄZANIE KONIEC
