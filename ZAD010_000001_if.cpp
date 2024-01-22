// ----------- ZAD1 -----------
//(if) Jako argument programu będzie podana intensywność wybuchu czyli liczba całkowita "n".
//Program ma wydrukować "Boom", w konfiguracji zależnej od poniższych warunków:
//- Drukowany tekst powinien zawierać n znaków "o",
//	chyba, że n jest mniejsze niż 2 – w takim wypadku powinien wydrukować "boom" bez sprawdzania pozostałych warunków
//- Jeśli n jest podzielne na 2 dodaj na końcu wykrzyknik
//- Jeśli n jest podzielne na 5 wszytko powinno być drukowane KAPSLOKIEM

//Nie korzystaj ze Stringów

//Przykład:
//	./boom 1 ➞ WYDRUKUJE: "boom"
//	./boom 4 ➞ WYDRUKUJE: "Boooom!"
//	./boom 5 ➞ WYDRUKUJE: "BOOOOOM"
//	./boom 10 ➞ WYDRUKUJE: "BOOOOOOOOOOM!"


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char** argv) {
	int n = std::stoi(argv[1]);
	
	if (n < 2){
		std::cout << "boom";
		return 0;
	}
	std::cout << "B";
	if(n % 5 == 0){
		for (int i = 0; i < n; i++){
			std::cout << "O";
		}
		std::cout << "M";
		
	} else {
		for(int i = 0; i < n; i++){
			std::cout << "o";
		}
		std::cout << "m";
	}
	
	if(n % 2 == 0){
		std::cout << "!";
	}
	
	return 0;
}
// ROZWIĄZANIE KONIEC
