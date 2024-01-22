// ----------- ZAD62003 -----------
//(class) Uzupełnij kod tak aby program liczył pole prostokąta
//./prostokat 5.5 7.8 ➞ WYDRUKUJE: "Pole powierzchni prostokąta o długości 5.5 i szerokości 7.8 wynosi 42.9.

#include <iostream>

class Prostokat {
private:
    float dlugosc;
    float szerokosc;

public:
    Prostokat(float dl, float sz) {
        dlugosc = dl;
        szerokosc = sz;
    }

    float polePowierzchni() {
        return dlugosc * szerokosc;
    }
};

int main(int argc, char *argv[]) {
// ROZWIĄZANIE POCZATEK
	float dlugosc = std::stof(argv[1]);
	float szerokosc = std::stof(argv[2]);
	Prostokat prostokat(dlugosc, szerokosc);
// ROZWIĄZANIE KONIEC
    std::cout << "Pole powierzchni prostokąta o długości " << dlugosc 
              << " i szerokości " << szerokosc 
              << " wynosi " << prostokat.polePowierzchni() << "." << std::endl;

    return 0;
}