// ----------- ZAD45 -----------
//(repetition) (powtórka) Jako argument programu będzie podana liczba naturalna N.
//Program ma wydukukować największą <a href="https://pl.wikipedia.org/wiki/Liczba_doskona%C5%82a">liczbę doskonałą</a> mniejszą od N
//Dopisz funkcję perfect która znajdzie taką liczbę
//Nie używaj drukowania


//./doskonale 30 ➞ WYDRUKUJE: 28

#include <iostream>
// ROZWIĄZANIE POCZATEK
void perfect(int &t){
  int sum;
  int greatest_perfect = -1;
  for(int i = 1; i < t; i++){
    sum = 0;
    for(int j = 1; j < i; j++){
      if(i % j == 0){
        sum += j;
      }
    }
   greatest_perfect = (sum == i) ? i : greatest_perfect;
  }
  t = greatest_perfect;
}

// ROZWIĄZANIE KONIEC
int main(int argc, char* argv[]){
	int t = std::stoi(argv[1]);
	perfect(t);
	std::cout << t;
}