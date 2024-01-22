// ----------- ZAD111 -----------
//(class) Do klasy Node z poprzedniego zadania dodajmy klasę stosu

//Dodaj do klasy Stack metody:
//   peek(), która zwraca wartość najnowaszego elementu,
//   isEmpty(), która sprawdza czy stos jest pusty,
//   push(), która umieszcza element na stosie,
//   
//tak aby podany w przykładzie program zadziałał
//(rozwiązaniem jest tylko brakujący kod)

//./stack 3 2 1➞ WYDRUKUJE:
//pusty=1
//3 2 1 
//pusty=0

#include <iostream>

class Node {
	private:
		int value;
		Node* next;

	public:
		Node(int value, Node* next) {
			this->value = value;
			this->next = next;
		}
		int getValue() {
			return value;
		}
		Node* getNext() {
			return next;
		}
};

class Stack {
	private:
		Node* top;

	public:
		Stack(){
			top = nullptr;
		}
		
		// destruktor klasy sluzy w tym wypadku do wyczyszczenia smieci z pamieci
		~Stack() {
			while (top != nullptr) {
				Node* temp = top;
				top = top->getNext();
				delete temp;
			}
		}
// ROZWIĄZANIE POCZATEK
    void push(int value){
    	top = new Node(value, top);
	}
    bool isEmpty(){
    	return top == nullptr;
	}
	int peek(){
		return top->getValue();
	}
// ROZWIĄZANIE KONIEC
};

int main(int argc, char** argv) {
	Stack stack;
	std::cout << "pusty=" << stack.isEmpty() << "\n";
	for(int i=1; i<argc; ++i){
		stack.push(std::stoi(argv[i]));
		std::cout << stack.peek() << " ";
	}
	std::cout << "\npusty=" << stack.isEmpty();


	return 0;
}