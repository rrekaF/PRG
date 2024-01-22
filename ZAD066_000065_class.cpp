// ----------- ZAD65 -----------
//(class) 
////Napisz klasę choinki tak aby program działał
////(rozwiązaniem jest tylko brakujący kod)

////(Zadanie podobne do 43)
////./choinka 3 ➞ WYDRUKUJE:
////  *
//// ***
////*****


#include <iostream>
using namespace std;

// ROZWIĄZANIE POCZATEK
class ChristmasTree{
public:
	int height;
	
	ChristmasTree(int ht){
		height = ht;
	}
	void draw(){
		for(int i = 0; i < height; i++){
			for(int j = 1; j < (height - i); j++){
				std::cout << " ";
			}
			for(int k = 0; k < (2*i) + 1; k++){
				std::cout << "*";
			}
			std::cout << "\n";
		}
	}
};
// ROZWIĄZANIE KONIEC


int main(int argc, char* argv[])
{
	// Sprawdzenie, czy liczba argumentów jest odpowiednia
	if (argc != 2){
		cout << "Nieprawidłowa liczba argumentów!" << endl;
		return 1;
	}
	ChristmasTree tree(stoi(argv[1]));
	tree.draw();
}