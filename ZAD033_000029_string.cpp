// ----------- ZAD29 -----------
//(string) wydrukuj od końca słowo zawarte w pierwszym parametrze
//użyj klasy String
//./rev abcd ➞ WYDRUKUJE: dcba


// ROZWIĄZANIE POCZATEK
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	std::string word = argv[1];
//	std::cout << word;

	for(int i = word.size() - 1; i >= 0; i--){
		std::cout << word[i];
	}
	return 0;
}


// ROZWIĄZANIE KONIEC
