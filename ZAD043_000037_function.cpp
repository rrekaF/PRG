// ----------- ZAD37 -----------
//(function) Napisz program, który potęguje liczby całkowite. 
//Aby to zrobić, zadeklaruj własną funkcję. 
//Funkcja powinna mieć sygnaturę:
//void mypow(int, int, int&);

//./pow 2 3 ➞ WYDRUKUJE: 8

void mypow(int, int, int&);
// ROZWIĄZANIE POCZATEK
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void mypow(int num, int pow, int* output){
	int result = num;
	for(int i = 2; i <= pow; ++i){
		result *= num;
	}
	*output = result;
}

int main(int argc, char** argv) {
	int result = -1;
	mypow(std::stoi(argv[1]), std::stoi(argv[2]), &result);
	std::cout << result;
	return 0;
}
// ROZWIĄZANIE KONIEC
