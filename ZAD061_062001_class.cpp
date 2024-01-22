// ----------- ZAD62001 -----------
//(class) Uzupełnij kod tak aby program liczył pole prostokąta
//./prostokat 5.5 7.8 ➞ WYDRUKUJE: "Pole powierzchni prostokąta o długości 5.5 i szerokości 7.8 wynosi 42.9.

#include <iostream>

class Prostokat {
public:
    float dlugosc;
    float szerokosc;

    float polePowierzchni() {
        return dlugosc * szerokosc;
    }
};

int main(int argc, char *argv[]) {
// ROZWIĄZANIE POCZATEK
	Prostokat prostokat;
	
	prostokat.dlugosc = std::stof(argv[1]);
	prostokat.szerokosc = std::stof(argv[2]);
// ROZWIĄZANIE KONIEC
    std::cout << "Pole powierzchni prostokąta o długości " << prostokat.dlugosc 
              << " i szerokości " << prostokat.szerokosc 
              << " wynosi " << prostokat.polePowierzchni() << "." << std::endl;

    return 0;
}