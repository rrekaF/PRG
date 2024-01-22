// ----------- ZAD2 -----------
//(if) Jako argument programu będzie podana liczba całkowita N.
//Nie używaj else ;)
//Wypisz liczby od 1 do N – przy każdej liczbie – jeżeli liczba ta jest podzielna przez:
//trzy – wypisz dodatkowo „Fizz”,
//pięć – wypisz dodatkowo „Buzz”,
//trzy i pięć – wypisz dodatkowo „FizzBuzz”.
//Przykład:
//./fizzbooz 3 ➞ WYDRUKUJE:
//1
//2
//3 Fizz


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char** argv) {
	int N = std::stoi(argv[1]);
	for(int i = 1; i <= N; i++){
		std::cout << i << " ";
		if(i % 3 == 0)
			std::cout << "Fizz";
		if(i % 5 == 0)
			std::cout << "Buzz";
		std::cout << "\n";
	}	
	return 0;
}
// ROZWIĄZANIE KONIEC
