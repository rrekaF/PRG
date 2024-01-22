// ----------- ZAD40 -----------
//(function) Dopisz do istniejącego kodu funkcję podmien_literki tak aby program drukował wskazany wynik
//Nie używaj cout wewnątrz funkcji
//W rozwiązanie wklej wyłącznie funkcję – nie cały program
//Program ma drukować string "heppo hello"

#include <iostream>
#include <string>
// ROZWIĄZANIE POCZATEK
std::string podmien_literki(std::string s1, char from, char to){
	for (int i = 0; i < s1.size(); i++){
		if (s1[i] == from){
			s1[i] = to;
		}
	}
	return s1;
}
// ROZWIĄZANIE KONIEC
int main(int argc, char* argv[]){
	char s1[] = "hello";
	std::cout << podmien_literki (s1, 'l', 'p') << ' ';
	std::cout << s1 << '\n';
}