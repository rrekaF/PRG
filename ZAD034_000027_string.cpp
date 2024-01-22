// ----------- ZAD27 -----------
//(string) Wydrukuj jego długość pierwszego parametru. Skorzystaj ze string aby <a href=https://cplusplus.com/reference/string/string/length/>okreslic dlugosc</a>


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char** argv){

	std::string path = argv[1];
	std::cout << path.size();
	return 0;
}
// ROZWIĄZANIE KONIEC
