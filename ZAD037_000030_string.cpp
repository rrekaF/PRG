// ----------- ZAD30 -----------
//(string) Sprawdź czy słowo zawarte w parametrze jest palindromem – wydrukuj "true" jeśli jest lub "false" jeśli nie jest
//użyj klasy String, nie używaj wbudowanego odwracania stringów


// ROZWIĄZANIE POCZATEK

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	std::string word = argv[1];
//	std::cout << word;
	int j = 0;
	bool palindrome = true;
	for(int i = word.size() - 1; i >= 0; i--){
		if(word[i] != word[j]){
			palindrome = false;
//			std::cout << word[i] << " is not " << word[j] << std::endl;
			break;
		}
		j++;
	}
	std::string result = (palindrome) ? "true":"false";
	std::cout << result;
	
	return 0;
	
	
}

// ROZWIĄZANIE KONIEC
