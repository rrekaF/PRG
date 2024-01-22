// ----------- ZAD81 -----------
//(loop) Napisz program, który pobierze z parametrów liczbę naturalną w, reprezentującą długość ramienia. Wydrukuj pusty w środku trójkąt prostokątny równoramienny z gwiazdek o wymiarze podanym w parametrze

//./rectangulartriangle 5 ➞ WYDRUKUJE: 
//*
//**
//* *
//*  *
//*****


// ROZWIĄZANIE POCZATEK
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x = std::stoi(argv[1]);
	for(int i = 1; i < x; i++){
		for(int j = 0; j < i; j++){
			if(j == 0 || j == i-1){
				std::cout << "*";
			} else {
				std::cout << " ";	
			}
			
		}
		std::cout << "\n";
		if(i == x-1){
			for(int j = 0; j <= i; j++){
				std::cout << "*";
			}
		}
	}
}
// ROZWIĄZANIE KONIEC
