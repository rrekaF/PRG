// ----------- ZAD55 -----------
//(recursive) Zrób zadanie 30 używając rekurencji
//Sprawdź czy słowo zawarte w parametrze jest palindromem – wydrukuj "true" jeśli jest lub "false" jeśli nie jest
//użyj klasy String, nie używaj wbudowanego odwracania stringów


// ROZWIĄZANIE POCZATEK
#include <iostream>
#include <string>

bool pali(std::string word, int w_size, int idx = 0){
	if(idx < (w_size / 2) + 1){
		if(word[idx] != word[(w_size - 1) - idx]){
			return false;	
		}
		return(pali(word, w_size, idx+1));
	}
	return true;
}

int main(int argc, char** argv) {
	std::string word = argv[1];
	
	std::cout << ((pali(word, word.size())) ? "true" : "false");
	return 0;
}
// ROZWIĄZANIE KONIEC
