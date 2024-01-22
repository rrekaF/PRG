// ----------- ZAD23 -----------
//(loop) Wydrukuj po spacjach <a href="https://pl.wikipedia.org/wiki/Permutacja#Permutacja_bez_powt%C3%B3rze%C5%84">permutacje bez powtórzeń</a> dla cyfr 1, 2, 3, 4. 
//Permutacją bez powtórzeń zbioru złożonego z n różnych elementów nazywamy każdy n wyrazowy ciąg utworzony ze wszystkich wyrazów zbioru.
//Nie korzystaj z rekurencji.

//Dla liczb 1, 2, 3 było by to:
//123 132 213 231 312 321 



// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char* argv[]){
	int argcx = 4;
	int argvx[5] = {0, 1, 2, 3, 4};
	for (int i = 1; i < 5; i++){
		for (int j = 1; j < 5; j++){
			if(i != j){
				for (int k = 1; k < 5; k++){
					if(k != i && k != j){
						for (int l = 1; l < 5; l++){
							if(l != i && l != j && l != k){
								std::cout << i << j << k << l << " ";
							}

						}
					}
				}
			}
		}
	}

		return 0;
}
// ROZWIĄZANIE KONIEC
