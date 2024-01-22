// ----------- ZAD39 -----------
//(function) Dopisz do istniejącego kodu funkcję silnia tak aby program drukował wskazany wynik
//Nie używaj cout wewnątrz funkcji
//W rozwiązanie wklej wyłącznie funkcję – nie cały program
//Program ma przyjmować liczbę i drukować silnię danej liczby tak jak na przykładzie:

//./silnia 5 ➞ WYDRUKUJE: 120

#include <iostream>
#include <string>
// ROZWIĄZANIE POCZATEK
void silnia(int num, int &result){
  result = num;
  for(int i = num - 1; i > 1; i--){
    result *= i;
  }
}

// ROZWIĄZANIE KONIEC
int main(int argc, char* argv[]){
	int N = 0;
	silnia (std::stoi(argv[1]), N);
	std::cout << N << '\n';
}