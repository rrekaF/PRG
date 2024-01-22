// ----------- ZAD25 -----------
//(loop) Napisz program, który wyświetli za pomocą cyfr wzór w postaci trójkąta prostokątnego z wyrównaniem do prawej tak jak podano na przykładzie. Parametrem programu jest wysokość trójkąta
//./halftree 5 ➞ WYDRUKUJE:
//    1
//   21
//  321
// 4321
//54321


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char* argv[]){
	int size = std::stoi(argv[1]);

	for (int i = 0; i < size; i++){
		for (int j = size-i; j > 1; j--){
			std::cout << " ";
		}
		for (int j = i + 1; j > 0; j--){
			std::cout << j;
		}
		std::cout << std::endl;
	}
		return 0;
}
// ROZWIĄZANIE KONIEC
