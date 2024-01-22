// ----------- ZAD11 -----------
//(arrays) Jako parametr przekazana jest liczba naturalna
//Wydrukuj reprezentację binarną przekazanej w argumecie liczby

//./binary 11 ➞ WYDRUKUJE: "1011"


// ROZWIĄZANIE POCZATEK
#include <iostream>
#include <cmath>

int main(int argc, char** argv) {
	int dec = std::stoi(argv[1]);
	int r = -1;
	std::string bin = "";
	while(dec > 0){
		r = dec % 2;
		if(r == 0){
			bin = "0" + bin;
		} else {
			bin = "1" + bin;
		}
		dec /= 2;

	}
	std::cout << bin;
	return 0;
}
// ROZWIĄZANIE KONIEC
