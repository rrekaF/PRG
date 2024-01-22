// ----------- ZAD52 -----------
//(recursive) Zrób zadanie 24 używając rekurencji
//Napisz program, który wydrukuje kwadratową macierz z zerami na głównej przekątnej, jedynkami tuż nad i pod główną przekątną, dalej dwójkami itd. Wielkość macierzy ma być podowana w parametrze programu

//./matrix 8 ➞ WYDRUKUJE:
//0 1 2 3 4 5 6 7
//1 0 1 2 3 4 5 6
//2 1 0 1 2 3 4 5
//3 2 1 0 1 2 3 4
//4 3 2 1 0 1 2 3 
//5 4 3 2 1 0 1 2
//6 5 4 3 2 1 0 1  
//7 6 5 4 3 2 1 0 



// ROZWIĄZANIE POCZATEK
#include <iostream>
#include <cmath>

void matrix(int n, int counter = 0, int rows = 0){
	if(rows < n){
		if(counter < n){
			std::cout << abs(counter - rows) << " ";
			matrix(n, counter + 1, rows);
		} 
		if(counter == n){
			std::cout << "\n";
			matrix(n, 0, rows + 1);
		}
	}
}

int main(int argc, char** argv) {
	int n = std::stoi(argv[1]);
	matrix(n);
	
	return 0;
}
// ROZWIĄZANIE KONIEC
