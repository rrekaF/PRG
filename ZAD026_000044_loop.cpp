// ----------- ZAD44 -----------
//(loop) (uzupełnienie kodu) Dopisz do istniejącego kodu fragment tak aby program drukował wskazany wynik
//Nie używaj drukowania
//W rozwiązanie wklej wyłącznie brakujący kod – nie cały program
//Program ma drukwać następujący wzór:

//./karo 5 ➞ WYDRUKUJE: 
//    *
//   ***
//  *****
// *******
//*********
// *******
//  *****
//   ***
//    *



#include <iostream>

int main(int argc, char** argv){
	int r = std::stoi(argv[1]);
	bool half = false;
// ROZWIĄZANIE POCZATEK
	int i = 0;
	while(i >= 0 && i <= r){
		if(half){
			i--;
		}else{
			i++;
		}
		
// ROZWIĄZANIE KONIEC
		if(i == r) 
			half = true;
		for(int j=1;j<=r-i;++j)
			std::cout << " ";
		for(int j=1;j<=2*i-1;++j)
			std::cout << "*";
		std::cout << std::endl;
	}
}