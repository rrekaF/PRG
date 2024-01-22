// ----------- ZAD50 -----------
//(recursive) Zrób zadanie 9 używając rekurencji, nie używaj pętli
//Jako parametry zostaną przekazane liczby całkowite
//Sprawdź i wydrukuj ile razy w tablicy parametrów występuje sekwencja 1 2 1

//./seq 0 1 2 1 2 1 5 ➞ WYDRUKUJE: "2"
//./seq 9 9 9 1 2 1 1 2 1 9 9 1 2 1 ➞ WYDRUKUJE: "3"


// ROZWIĄZANIE POCZATEK
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int check_seq(int argc, char** args, int counter){
	
	if(counter < argc){
		if(std::stoi(args[counter-2]) == 1 && std::stoi(args[counter-1]) == 2 && std::stoi(args[counter]) == 1){
			return check_seq(argc, args, counter + 1) + 1;
		}
		return check_seq(argc, args, counter + 1);
	}
	return 0;
}

int main(int argc, char** argv) {
	std::cout << check_seq(argc, argv, 3);
	return 0;
}
// ROZWIĄZANIE KONIEC
