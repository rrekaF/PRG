// ----------- ZAD51 -----------
//(recursive) Zrób zadanie 19 używając rekurencji, nie używaj pętli
//Napisz program, który pobierze z parametru liczbę naturalną N, a następnie wydrukuje z gwiazdek Krzyż świętego Andrzeja o szerokości N

//./andrzej 4 ➞ WYDRUKUJE: 
//	*  *
//	 **
//	 **
//	*  *
//./andrzej 3 ➞ WYDRUKUJE: 
//	* *
//	 *
//	* *


// ROZWIĄZANIE POCZATEK
#include <iostream>

/*
./andrzej 4 ➞ WYDRUKUJE: 
	*  *
	 **
	 **
	*  *
./andrzej 3 ➞ WYDRUKUJE: 
	* *
	 *
	* *
*/
void andrew(int n, int x=0, int y=0){
	if(y < n){
		if(x == n){
			y += 1;
			x = 0;
			std::cout << "\n";
		}
		if(x == y || x + y == n-1){
			std::cout << "*";
		} else {
			std::cout << " ";
		}
		andrew(n, x+1, y);
			
	}

	
}

int main(int argc, char** argv) {
	andrew(std::stoi(argv[1]));
	return 0;
}
// ROZWIĄZANIE KONIEC
