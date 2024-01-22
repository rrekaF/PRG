// ----------- ZAD12 -----------
//(loop) Napisz program, który pobierze z parametrów dwie liczby naturalne w i h, reprezentujące szerokość i wysokość. Wydrukuj prostokąt z gwiazdek o wymiarach podanych w parametrach

//./rectangle 3 4 ➞ WYDRUKUJE: 
//***
//***
//***
//***


// ROZWIĄZANIE POCZATEK


#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int w = std::stoi(argv[1]);
	int h = std::stoi(argv[2]);
	
	for(int i = 0; i < h; i++){
		for(int j = 0; j < w; j++){
			std::cout << "*";
		}
		std::cout << "\n";
	}
	return 0;
}
// ROZWIĄZANIE KONIEC
