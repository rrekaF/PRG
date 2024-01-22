// ----------- ZAD10 -----------
//(arrays) Jako parametry zostaną przekazane liczby całkowite
//Wydrukuj indeks pierwszego wystąpienia pod rząd co najmniej trzech wartości większych od 1000 w tablicy parametrów

//./gt 1 1 1 1 1111 1111 1 11 1111 1111 1111 1111 1 ➞ WYDRUKUJE: "8"



// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char** argv){
	int result = 0;
	for(int i = 1; i < argc; i++){
		if( i >= 3){
			if(std::stoi(argv[i-2]) > 1000 && std::stoi(argv[i-1]) > 1000 && std::stoi(argv[i]) > 1000){
				result = i-2;
				break;
			}
		}
	}
	std::cout << result-1;
	return 0;
}
// ROZWIĄZANIE KONIEC
