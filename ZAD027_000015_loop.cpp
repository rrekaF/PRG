// ----------- ZAD15 -----------
//(loop) Napisz program, który pobierze z parametrów liczbę rzeczywistą r, reprezentującą promień. Wydrukuj koło z gwiazdek o promieniu podanym w parametrze.
//Nalerzy wykorzystać odległość punktu od punktu lub równanie okręgu (na to samo wyjdzie)
//Wydrukuj dwie gwiazdki poziomo na każdą jednostkę, żeby było bardziej okrągłe


//	./circle 2.5 ➞ WYDRUKUJE: 
//  ******  
//**********
//**********
//**********
//  ******  

//	./circle 3.5 ➞ WYDRUKUJE: 
//    ******	
//  **********  
//**************
//**************
//**************
//  **********  
//    ******	

//	./circle 4.5 ➞ WYDRUKUJE: 
//    **********	
//  **************  
//******************
//******************
//******************
//******************
//******************
//  **************  
//    **********  


// ROZWIĄZANIE POCZATEK

#include <iostream>
#include <cmath>

int main(int argc, char** argv) {
	float r = std::stof(argv[1]);
	for (int i =-r; i < r; i++ ) {
		for (int j =-r; j < r; j++){
			if(pow(i,2) + pow(j,2) < pow(r,2))
				std::cout << "**";
			else
				std::cout << "  ";
		}
		std::cout << std::endl;
	}
	return 0;
}
// ROZWIĄZANIE KONIEC
