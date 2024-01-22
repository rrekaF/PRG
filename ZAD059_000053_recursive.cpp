// ----------- ZAD53 -----------
//(recursive) Zrób zadanie używając rekurencji
//Napisz program, który wydrukuje znak karo gwiazdkami,  w parametrze programu podana jest wysokość/2

//./karo 5 ➞ WYDRUKUJE: 
//    *
//   ***
//  *****
// *******
//*********
// *******
//  *****
//   ***
//    *



// ROZWIĄZANIE POCZATEK
#include <iostream>

void print_ch(int n, char ch){
	if(n > 0){
		std::cout << ch;
		print_ch(n-1, ch);
	}
}

void karo(int n, int rows = 0, int direction = 1){
	if(rows == n-1){
		direction = -1;
	}
	if(rows <= n-1 && rows >= 0){
		print_ch((n - rows)-1, ' ');
		print_ch((rows * 2) + 1,'*');
		std::cout << "\n";
		
		karo(n, rows + direction, direction);
	}
	
}

int main(int argc, char** argv) {
	int n = std::stoi(argv[1]);
	karo(n);
	return 0;
}
// ROZWIĄZANIE KONIEC
