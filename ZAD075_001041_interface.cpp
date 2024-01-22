// ----------- ZAD1041 -----------
//(interface) Zaimplementuj interfejs Przywitanie
//wyswietlPowitanie powinno drukować powitanie
//skorzystaj z metody getPowitanie


#include <iostream>
// ROZWIĄZANIE POCZATEK
	class Przywitanie{
public:
	virtual std::string getPowitanie() = 0;
	void wyswietlPowitanie(){
		std::cout << getPowitanie();
	}
};
// ROZWIĄZANIE KONIEC
class Osoba: public Przywitanie {
	private:
		std::string imie;
	public:
		Osoba(std::string im): imie(im){}

		std::string getPowitanie() override {
			return "Cześć, nazywam się " + imie + "!";
		}
};

int main() {
	Przywitanie* osoba = new Osoba("Jan");
	osoba->wyswietlPowitanie();
	
	delete osoba;  // Pamiętaj o zwolnieniu pamięci
}