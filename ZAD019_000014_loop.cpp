// ----------- ZAD14 -----------
//(loop) Napisz program, który pobierze z parametrów dwie liczby naturalne w i h, reprezentujące szerokość i wysokość. Wydrukuj pusty w środku prostokąt z gwiazdek o wymiarach podanych w parametrach

//./emptyrectangle 5 4 ➞ WYDRUKUJE: 
//*****
//*   *
//*   *
//*****


// ROZWIĄZANIE POCZATEK
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int w = std::stoi(argv[1]);
	int h = std::stoi(argv[2]);
	for(int i = 0; i < w; i++){
		std::cout << "*";
	}
	std::cout << std::endl;
	
	for(int i = 0; i < h-2; i++){
		std::cout << "*";
		for(int j = 0; j < w-2; j++){
			std::cout << " ";
		}
		std::cout << "*" << std::endl;
	}
	for(int i = 0; i < w; i++){
		std::cout << "*";
	}
	return 0;
}
// ROZWIĄZANIE KONIEC
