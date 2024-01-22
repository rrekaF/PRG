// ----------- ZAD8 -----------
//(arrays) Jako parametry zostaną przekazane liczby całkowite
//Zwróć indeks pierwszej liczby większej od 1000 w tablicy parametrów lub -1 jeśli takiej nie ma

//./find 100 101 1001 999 ➞ WYDRUKUJE: "2"
//./find 9999 ➞ WYDRUKUJE: "0"
//./find 1 2 3 ➞ WYDRUKUJE: "-1"


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char** argv){
	int result = 0;
	for(int i = 1; i < argc; i++){
		if(std::stoi(argv[i]) > 1000){
			result = i;
			break;
		}
	}
	std::cout << result - 1;
	return 0;
}
// ROZWIĄZANIE KONIEC
