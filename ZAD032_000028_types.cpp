// ----------- ZAD28 -----------
//(types) Napisz program drukujący numerek wraz z odpowiadającą wartością w tablicy <a href=https://pl.wikipedia.org/wiki/ASCII>ascii</a>. Zakres numerków jest podany w parametrach programu, tak jak na przykładzie.

//./ascii 65 75 ➞ WYDRUKUJE:
//65 -- A
//66 -- B
//67 -- C
//68 -- D
//69 -- E
//70 -- F
//71 -- G
//72 -- H
//73 -- I
//74 -- J
//75 -- K 


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char** argv){
	int range_low = std::stoi(argv[1]);
	int range_high = std::stoi(argv[2]);
	for(int i = range_low; i <= range_high; i++){
		std::cout << i << " -- " << char(i) << std::endl;
	}
	return 0;
}
// ROZWIĄZANIE KONIEC
