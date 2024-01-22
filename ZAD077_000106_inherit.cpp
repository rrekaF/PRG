// ----------- ZAD106 -----------
//(inherit) Dodaj brakujący kod
//Nie używaj print
//./inherit ➞ WYDRUKUJE:
//Domyślna metoda wspólna dla A
//Domyślna metoda wspólna dla B

#include <iostream>
class DerivedA{
	public:
		void show(){
			std::cout << "Domyślna metoda wspólna dla A" << std::endl;
		}
};

class DerivedB{
	public:
		void show(){
			std::cout << "Domyślna metoda wspólna dla B" << std::endl;
		}
};

class Final : public DerivedA, public DerivedB {

// ROZWIĄZANIE POCZATEK
public:
	void show(){
		((DerivedA*) this)->show();
		DerivedB::show();
	}

// ROZWIĄZANIE KONIEC

};

int main() {
	Final obj;
	obj.show();
}