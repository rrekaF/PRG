// ----------- ZAD99 -----------
//(loop) Jako parametr będzie przekazana liczba binarna, przy czym poszczególne cyfry będą jako odzielne parametry. Napisz program który wydrukuje reprezentację dziesiętną przekazanej liczby
//Nie używaj pow ani math

//./parametr 1 0 0 ➞ WYDRUKUJE: "4"
//./parametr 1 0 1 0 1 1 1 0 1 0 1 ➞ WYDRUKUJE: "1397"


// ROZWIĄZANIE POCZATEK
#include <iostream>
#include <cmath>

int main(int argc, char** argv) {
	int power = 0, decimal = 0;
	for(int i = argc - 1; i >= 1; i--){
		decimal += std::stoi(argv[i]) * pow(2, power);
		power++;
	}
	std::cout << decimal;
	return 0;
}


// ROZWIĄZANIE KONIEC
