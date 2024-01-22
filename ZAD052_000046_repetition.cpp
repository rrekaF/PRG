// ----------- ZAD46 -----------
//(repetition) (powtórka) Dopisz do istniejącego kodu fragment tak aby program drukował wskazany wynik
//Nie używaj cout
//W rozwiązanie wklej wyłącznie brakujący kod – nie cały program
//Program ma drukwać następujący wzór:

//./choinka 4 ➞ WYDRUKUJE: 
//      1
//    2 3
//  4 5 6
//7 8 9 10

#include <iostream>
int main(int argc, char* argv[]){
	int rows = std::stoi(argv[1]);
// ROZWIĄZANIE POCZATEK
    int counter = 1;
    for(int i = 1; i <= rows; i++){
      for(int k = 0; k < 2 * (rows - i); k++) 

// ROZWIĄZANIE KONIEC
			std::cout << " ";
		for(int j=1; j<=i; j++)
			std::cout << counter++ << " ";
		std::cout << std::endl;

	}
}