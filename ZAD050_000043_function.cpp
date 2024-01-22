// ----------- ZAD43 -----------
//(function) Dopisz do istniejącego kodu funkcję pomnoz_znaki tak aby program drukował wskazany wynik
//Nie używaj cout wewnątrz funkcji
//W rozwiązanie wklej wyłącznie funkcję – nie cały program
//Program ma przyjmować wysokość choinki i drukwać choinkę tak jak na przykładzie:

//./tree 3 ➞ WYDRUKUJE: 
//  *
// ***
//*****

#include <iostream>
#include <string>
// ROZWIĄZANIE POCZATEK
std::string pomnoz_znaki(char znak, int num){
  std::string result = ""; 

  for(int i = 0; i < num; i++){
    result += znak;
  }
  return result;

}

// ROZWIĄZANIE KONIEC
int main(int argc, char* argv[]){
	int N = std::stoi(argv[1]);
	for(int i=0;i<N;++i){
		std::cout << pomnoz_znaki (' ', N-i-1);
		std::cout << pomnoz_znaki ('*', 2*i+1);
		std::cout << '\n';
	}
}