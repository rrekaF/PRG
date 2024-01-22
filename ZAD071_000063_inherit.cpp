// ----------- ZAD63 -----------
//(inherit) Dopisz brakujący kod do programu
//Program powinien liczyć powierzchnie prostokąta
//./prostokat 3 2 ➞ WYDRUKUJE: Pole powierzchni prostokąta: 6

#include <iostream>

using namespace std;

// Klasa bazowa o nazwie Shape
class Shape {
	// protected oznacza ze dostęp do pól będzie w tej klasie i klasach potomnych
	protected:
		int width, height;
	public:
		void setWidth(int w) {
			width = w;
		}
		void setHeight(int h) {
			height = h;
		}
};

// Klasa pochodna o nazwie Rectangle, dziedzicząca po klasie Shape
// "public" przed klasą bazową oznacza tyle że dziedziczone pola będą miały widoczność jak orginalnie
class Rectangle: public Shape {
	public:
		int getArea() {
			return (width * height);
		}
};

int main(int argc, char* argv[]){
// ROZWIĄZANIE POCZATEK
	Rectangle rect;
	rect.setWidth(std::stoi(argv[1]));
	rect.setHeight(std::stoi(argv[2]));
// ROZWIĄZANIE KONIEC
	// Wyświetlenie pole powierzchni prostokąta
	cout << "Pole powierzchni prostokąta: " << rect.getArea() << endl;

	return 0;
}