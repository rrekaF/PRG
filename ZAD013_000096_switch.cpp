// ----------- ZAD96 -----------
//(switch) Napisz program, który pobierze z pierwszego parametru numer miesiąca i używajac switch wydrukuje jego nazwe. Wynik wydrukuj na standardowe wyjscie.

//./parametr 1 ➞ WYDRUKUJE: "Styczeń"
//./parametr 2 ➞ WYDRUKUJE: "Luteń"


// ROZWIĄZANIE POCZATEK

#include <iostream>
int main(int argc, char** argv) {
	int month = std::stoi(argv[1]);
	switch(month){
		case 1:
			std::cout << "Styczeń";
			return 0;
		case 2:
			std::cout << "Luty";
			return 0;
		case 3:
			std::cout << "Marzec";
			return 0;
		case 4:
			std::cout << "Kwiecień";
			return 0;
		case 5:
			std::cout << "Maj";
			return 0;
		case 6:
			std::cout << "Czerwiec";
			return 0;
		case 7:
			std::cout << "Lipiec";
			return 0;
		case 8:
			std::cout << "Sierpień";
			return 0;
		case 9:
			std::cout << "Wrzesień";
			return 0;
		case 10:
			std::cout << "Październik";
			return 0;
		case 11:
			std::cout << "Listopad";
			return 0;
		case 12:
			std::cout << "Grudzień";
			return 0;
		default:
			std::cout << "Something went wrong";
	}
	
	return 0;
}

// ROZWIĄZANIE KONIEC
