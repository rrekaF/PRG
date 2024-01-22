// ----------- ZAD112 -----------
//(class) Do klasy Node z poprzedniego zadania dodajmy klasę stosu

//Dodaj do klasy Stack metody:
//   pop(), która zdejmuje element ze stosu i zwraca jego wartosc (pamiętaj aby "delete" stkasować niepotrzebny element inaczej zostanie na zwasze w pamięci)
//   
//tak aby podany w przykładzie program zadziałał
//(rozwiązaniem jest tylko brakujący kod)

//./stack 3 2 1➞ WYDRUKUJE:
//1 2 3 

#include <iostream>

class Node {
	private:
		int value;
		Node* next;

	public:
		Node(int value, Node* next) {
			this->value=value;
			this->next=next;
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

		~Stack() {
			while (top != nullptr) {
				Node* temp = top;
				top = top->getNext();
				delete temp;
			}
		}
		void push(int value) {
			top = new Node(value, top);
		}
// ROZWIĄZANIE POCZATEK
    int pop(){
    	Node* temp = top;
    	top = top->getNext();
    	int value = temp->getValue();
    	delete temp;
    	return value;
	}
// ROZWIĄZANIE KONIEC
};

int main(int argc, char** argv) {
	Stack stack;
	for(int i=1; i<argc; ++i)
		stack.push(std::stoi(argv[i]));
	for(int i=1; i<argc; ++i)
		std::cout << stack.pop() << " ";

	return 0;
}