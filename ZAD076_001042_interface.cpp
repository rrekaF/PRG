// ----------- ZAD1042 -----------
//(interface) Dopisz klasę Robot
//		
//Uruchomienie programu z argumentami "Hello World" "How are you" wydrukuje:
//I am Karen I am speak out HELLO WORLD
//Bzzz GPT roger roger HELLO WORLD
//I am Karen I am speak out HOW ARE YOU
//Bzzz GPT roger roger HOW ARE YOU

#include <iostream>
#include <string>
#include <algorithm>
class Speakable {
	public:
		virtual void speak(std::string message) = 0;
};

class Person : public Speakable {
	private:
		std::string name;

	public:
		Person(std::string name) : name(name) {}

		void speak(std::string message) override {
			// zmien literki w stringu na duże
			std::transform(message.begin(), message.end(), message.begin(), ::toupper);
			std::cout << "I am " << name << " I am speak out " << message << std::endl;
		}
};
// ROZWIĄZANIE POCZATEK
class Robot : public Speakable{
  private:
    std::string name;

	public:
		Robot(std::string name) : name(name){}

    void speak(std::string message) override {
			std::transform(message.begin(), message.end(), message.begin(), ::toupper);
			std::cout << "Bzzz " << name << " roger roger " << message << std::endl;
    }
		
};

// ROZWIĄZANIE KONIEC
int main(int argc, char* argv[]) {
	if (argc < 2) {
		std::cout << "Usage: program [messages]" << std::endl;
		return 1;
	}

	// Tablice obiektów Speakable
	Speakable* speakableObjects[2];
	speakableObjects[0] = new Person("Karen");
	speakableObjects[1] = new Robot("GPT");

	// Iteracja przez argumenty i obiekty
	for (int i = 1; i < argc; ++i) {
		for (int j = 0; j < 2; ++j) {
			speakableObjects[j]->speak(argv[i]);
		}
	}

	// Zwolnienie pamięci
	delete speakableObjects[0];
	delete speakableObjects[1];

	return 0;
}