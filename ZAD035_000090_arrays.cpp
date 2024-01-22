// ----------- ZAD90 -----------
//(arrays) Jako parametr przekazana jest liczba binarna
//Wydrukuj reprezentację dziesiętną przekazanej w argumecie liczby

//./binary 1011 ➞ WYDRUKUJE: "11"


// ROZWIĄZANIE POCZATEK
#include <iostream>
#include <cmath>

int main(int argc, char** argv) {
	int power = 0, decimal = 0;
	std::string bin = argv[1];
	for(int i = bin.size() - 1; i >= 0; i--){
	  decimal += (bin[i] - 48) * pow(2, power);
	  power++;
	}
	std::cout << decimal;
	return 0;
}

// ROZWIĄZANIE KONIEC
