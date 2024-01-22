// ----------- ZAD42 -----------
//(function) Dopisz do istniejącego kodu funkcję liczby_od_do tak aby program drukował wskazany wynik
//Nie używaj cout wewnątrz funkcji
//W rozwiązanie wklej wyłącznie funkcję – nie cały program
//Program ma przyjmować liczbę i drukować macież według poniższego przykładu:

//./ring 8 ➞ WYDRUKUJE:
//0 1 2 3 4 5 6 7
//7 0 1 2 3 4 5 6
//6 7 0 1 2 3 4 5
//5 6 7 0 1 2 3 4
//4 5 6 7 0 1 2 3 
//3 4 5 6 7 0 1 2
//2 3 4 5 6 7 0 1  
//1 2 3 4 5 6 7 0

#include <iostream>
#include <string>
// ROZWIĄZANIE POCZATEK
std::string liczby_od_do(int num1, int num2){
  /*
   * 0 -> (0, 8)(0, 0)
   * 1 -> (7, 8)(0, 7)
   * 2 -> (6, 8)(0, 6)
   * ...
   * */
  std::string result = "";
  for(int i = num1; i < num2; i++){
    result += std::to_string(i);
    result += " ";
  }

  return result;
}

// ROZWIĄZANIE KONIEC
int main (int argc, char ** argv){
	int N = std::stoi(argv[1]);
	for(int i=0; i<N; ++i){
		std::cout << liczby_od_do((N-i)%N, N);
		std::cout << liczby_od_do(0, (N-i)%N) << "\n";
	}
}