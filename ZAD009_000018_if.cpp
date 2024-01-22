// ----------- ZAD18 -----------
//(if) Jako parametry zostaną przekazane trzy liczby całkowite
//Napisz program, który posortuje rosnąco trzy liczby całkowite przekazane jako argument programu
//Nie używaj pętli

//./minisort 5 -2 1 ➞ WYDRUKUJE: "-2 1 5"


// ROZWIĄZANIE POCZATEK

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a = std::stoi(argv[1]);
	int b = std::stoi(argv[2]);
	int c = std::stoi(argv[3]);
	
	if(a > b && a > c){
		if (b > c){
			std::cout << c << " " << b << " " << a;
		}
		if(c > b){
			std::cout << b << " " << c << " " << a;
		}
	} else {
		if(b > a && b > c){
			if(a > c){
				std::cout << c << " " << a << " " << b;
			}
			if(c > a){
				std::cout << a << " " << c << " " << b;
			}
		} else {
			if(a > b){
				std::cout << b << " " << a << " " << c;
			} else {
				std::cout << a << " " << b << " " << c;
			}
		}
	}
		
	
	return 0;
}

// ROZWIĄZANIE KONIEC
