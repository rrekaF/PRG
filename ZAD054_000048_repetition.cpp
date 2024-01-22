// ----------- ZAD48 -----------
//(repetition) (powtórka) Dopisz do istniejącego kodu funkcję "is_123" oraz "is_not" tak aby program drukował wskazany wynik
//is_123 ma sprawdzać czy przekazana tablica posiada po kolei elementy: 1, 2, 3
//is_not ma zanegować argument
//Nie używaj cout wewnątrz funkcji
//W rozwiązanie wklej wyłącznie funkcję – nie cały program
//./fun 1 1 1 1 ➞ WYDRUKUJE: 0 1 0
//./fun 0 0 0 0 ➞ WYDRUKUJE: 0 1 1
//./fun 0 1 2 3 ➞ WYDRUKUJE: 1 0 1

#include <iostream>
// ROZWIĄZANIE POCZATEK
int is_123(int arg_n,int args[]){
  if(arg_n >= 2){
    for(int i = 2; i < arg_n; i++){
      if(args[i-2] == 1 && args[i-1] == 2 && args[i] == 3){
        return 1;
      }
    }
  }
  return 0;
}

int is_not(int num){
  return (num) ? 0 : 1;
}

// ROZWIĄZANIE KONIEC
int main(int argc, char* argv[]){
	int args[argc - 1];
	for(int i = 1; i < argc; ++i) 
		args[i - 1] = std::stoi(argv[i]);
	std::cout << is_123(argc-1, args) << " " << is_not(is_123(argc-1, args)) << " " << is_not(args[0]);
}