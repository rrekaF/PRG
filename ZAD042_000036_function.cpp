// ----------- ZAD36 -----------
//(function) Napisz program, który potęguje liczby całkowite. 
//Liczba i potęga są podane w argumentach, wynik ma być wydrukowany na standardowe wyjście. 
//Aby to zrobić, zadeklaruj własną funkcję. Funkcja powinna mieć sygnaturę:
//int mypow(int, int);

//./pow 2 3 ➞ WYDRUKUJE: 8

int mypow(int, int);
// ROZWIĄZANIE POCZATEK
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int mypow(int num, int pow){
	int result = num;
	for(int i = 2; i <= pow; ++i){
//		std::cout << result << std::endl;
		result *= num;
	}
	
	return result;
}

int main(int argc, char** argv) {
	std::cout << mypow(std::stoi(argv[1]), std::stoi(argv[2]));
	return 0;
}
// ROZWIĄZANIE KONIEC
