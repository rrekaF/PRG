// ----------- ZAD103 -----------
//(inherit) Dodaj brakujący kod
//./inherit Leszek ➞ WYDRUKUJE:
//Leszek is eating.
//Leszek is barking.


#include <iostream>
// ROZWIĄZANIE POCZATEK
class Animal{
	protected:
		std::string name;
	Animal(std::string name){
		this->name = name;
	}
	public:
	void eat(){
		std::cout << name << " is eating." << std::endl;
	}
};
class Dog : public Animal{
public:
	Dog(std::string name) : Animal(name){}
	void bark(){
		std::cout << name << " is barking." << std::endl;
	}

	
};
// ROZWIĄZANIE KONIEC
int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: program [name]" << std::endl;
        return 1;
    }

    Animal* dog = new Dog(argv[1]);
    dog->eat();
    ((Dog*)dog)->bark();

    delete dog;  // Pamiętaj o zwolnieniu pamięci
}