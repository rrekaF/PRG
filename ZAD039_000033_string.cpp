// ----------- ZAD33 -----------
//(string) Ze stringów przekazanych w argumentach wydrukuj po spacjach tylko te w których wszystkie literki są takie same.


//Przykład:
//	./filter "aaa" "bbb" "ccc" ➞ WYDRUKUJE: "aaa bbb ccc"
//	./filter "a" "bc" "dd" ➞ WYDRUKUJE: "a dd"
//	./filter "hey" ➞ WYDRUKUJE: nic nie wydrukuje


// ROZWIĄZANIE POCZATEK
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	bool oneLetter = true;
	std::string word = "";
	for(int i = 1; i < argc; i++){
		word = argv[i];
		for(int j = 1; j < word.length(); j++){
			if(argv[i][j] != argv[i][j-1]){
				oneLetter = false;
				break;
			}	
		}
		if(oneLetter) std::cout << argv[i] << " ";
		oneLetter = true;
	}
	return 0;
	
	
}
// ROZWIĄZANIE KONIEC
