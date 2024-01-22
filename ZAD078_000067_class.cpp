// ----------- ZAD67 -----------
//(class) Uzupełnij kod programu aby linkedlista działała
//(rozwiązaniem jest tylko brakujący kod)

//./lista ➞ WYDRUKUJE: Że co? Że jak? no właśnie... 5 10 15

class Node {
	private:
	int value;
	Node* next;

	public:
// ROZWIĄZANIE POCZATEK
public:
	Node(int val, Node* n){
		value = val;
		next = n;
	}
	int	getValue(){
		return value;
	}
	Node* getNext(){
		return next;
	}
// ROZWIĄZANIE KONIEC
};
#include <iostream>

int main() {
	// Tworzenie trzech elementów listy
	Node* element1 = new Node(15, nullptr);
	Node* element2 = new Node(10, element1);
	Node* element3 = new Node(5, element2);
	std::cout << "Że co? Że jak? no właśnie... "; // https://youtu.be/MXwrMXD0iqw?t=15
	// Wypisywanie elementów listy od początku do końca
	Node* current = element3;
	while (current != nullptr) {
		std::cout << current->getValue() << " ";
		current = current->getNext();
	}

	return 0;
}