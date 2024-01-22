// ----------- ZAD19 -----------
//(loop) Napisz program, który pobierze z parametru liczbę naturalną N, a następnie wydrukuje z gwiazdek Krzyż świętego Andrzeja o szerokości N

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

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int w = std::stoi(argv[1]);
	int arr[w][w] = {0};
	for(int i = 0; i < w; i++){
		for(int j = 0; j < w; j++){
			arr[i][j] = 0;
		}
	}
	for(int i = 0; i < w; i++){
		arr[i][i] = 1;
	}

	int i = w, j = 0;
	while(i > 0 && j < w){
		arr[j][i-1] = 1;
		i--;
		j++;
	}
	i = 0;
	j = 0;
	for(i = 0; i < w; i++){
		for(j = 0; j < w; j++){
			if( arr[i][j] == 0){
				std::cout << " ";
			} else {
				std::cout << "*";
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
// ROZWIĄZANIE KONIEC
