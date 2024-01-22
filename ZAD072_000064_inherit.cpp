// ----------- ZAD64 -----------
//(inherit) //Dopisz brakujący kod do programu:
////- inicjalizacja
////- parsowanie argumentów
////- ustawienie szerokości i wysokości prostokąta za pomocą konstruktora z klasy bazowej

////Program powinien liczyć powierzchnie prostokąta
////./prostokat 3 2 ➞ WYDRUKUJE: Pole powierzchni prostokąta: 6

#include <iostream>

using namespace std;

// Klasa bazowa o nazwie Shape
class Shape {
	protected:
		int width, height;
	public:
		Shape(int w, int h) {
			width = w;
			height = h;
		}
};

// Klasa pochodna o nazwie Rectangle, dziedzicząca po klasie Shape
class Rectangle: public Shape {
	public:
		// taka składnia z dwukropkiem oznacza, że wywołujemy konstruktor z klasy rodzica
		Rectangle(int w, int h) : Shape(w, h) {}
		int getArea() {
			return (width * height);
		}
};

int main(int argc, char* argv[]){
// ROZWIĄZANIE POCZATEK
	Rectangle rect(std::stoi(argv[1]), std::stoi(argv[2]));

// ROZWIĄZANIE KONIEC
	// Wyświetlenie pole powierzchni prostokąta
	cout << "Pole powierzchni prostokąta: " << rect.getArea() << endl;

	return 0;
}