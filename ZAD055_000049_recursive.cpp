// ----------- ZAD49 -----------
//(recursive) Zrób zadanie 17 używając rekurencji, nie używaj pętli
//Napisz program, który wydrukuje sumę wszystkich PARZYSTYCH liczb przekazanych jako argumenty 
//		
//Przykład:
//	./even 1 2 3 4 ➞ WYDRUKUJE: "6"
//	./even 1 1 1 1 ➞ WYDRUKUJE: "0"
//	./even -1 -2 -3 -4 ➞ WYDRUKUJE: "-6"


// ROZWIĄZANIE POCZATEK
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int add_even(int argc, char** args, int counter){
	if(counter < argc){
		if(std::stoi(args[counter]) % 2 == 0)
			return add_even(argc, args, counter+1) + std::stoi(args[counter]);
		return add_even(argc, args, counter+1);
	} else
		return 0;
		
	return -1;
}

int main(int argc, char** argv) {
	int tab[argc-1];
	std::cout << add_even(argc, argv, 1);
	return 0;
}
// ROZWIĄZANIE KONIEC
