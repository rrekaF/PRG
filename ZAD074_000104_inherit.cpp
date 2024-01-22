// ----------- ZAD104 -----------
//(inherit) Dodaj brakującą klasę Laptop
//Nie używaj print
//./inherit ➞ WYDRUKUJE:
//Marka: Asus
//Model: ZenBook
//Typ: Laptop
//Procesor: Intel Core i7
//RAM: 16GB
//Dysk: 512GB

#include <iostream>

class Urzadzenie {
	public:
		virtual void wyswietlInformacje() = 0;  // Czysto wirtualna funkcja
};

class Komputer : public Urzadzenie {
	private:
		std::string marka;
		std::string model;

	protected:
		std::string procesor;
		int ram;
		int dysk;

	public:
		// ta składnia po : to zwykłe przypisanie pól tej klasy, uwaga może się mylić z wywołaniem konstruktora rodzica
		Komputer(std::string m, std::string mod, std::string proc, int r, int d) 
			: marka(m), model(mod), procesor(proc), ram(r), dysk(d) {}

		std::string getMarka(){
			return marka;
		}

		std::string getModel(){
			return model;
		}

		virtual std::string getTypKomputera() = 0;  // Czysto wirtualna funkcja

		void wyswietlInformacje() override {
			std::cout << "Marka: " << getMarka() << std::endl;
			std::cout << "Model: " << getModel() << std::endl;
			std::cout << "Typ: " << getTypKomputera() << std::endl;
			std::cout << "Procesor: " << procesor << std::endl;
			std::cout << "RAM: " << ram << "GB" << std::endl;
			std::cout << "Dysk: " << dysk << "GB" << std::endl;
		}
};
// ROZWIĄZANIE POCZATEK
class Laptop : public Komputer{
public:
	Laptop(std::string marka, std::string model, std::string procesor, int ram, int dysk) : Komputer(marka, model, procesor, ram, dysk){}
	std::string getTypKomputera(){
		return "Laptop";
	}
};

// ROZWIĄZANIE KONIEC
int main() {
    Komputer* komputer = new Laptop("Asus", "ZenBook", "Intel Core i7", 16, 512);
    komputer->wyswietlInformacje();
    
    delete komputer;  // Pamiętaj o zwolnieniu pamięci
}