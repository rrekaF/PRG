// ----------- ZAD34 -----------
//(function) Napisz program, który przyjmie w argumentach dwie liczby, porówna je i wyświetli maksimum.
//Zadeklaruj funkcję o nazwie max_two, która porównuje liczby i zwraca maksimum.
//./max 1 2 ➞ WYDRUKUJE: 2


// ROZWIĄZANIE POCZATEK
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int max_two(int a, int b){
	return (a > b) ? a : b;
}

int main(int argc, char** argv) {
	int a = std::stoi(argv[1]), b = std::stoi(argv[2]);
	std::cout << max_two(a, b);
	return 0;
}
// ROZWIĄZANIE KONIEC
