// ----------- ZAD69 -----------
//(class) Do klasy Node z poprzedniego zadania (67) dodajmy klasę listy powiązanej LinkedList

//Dodaj do klasy LinkedList metodę getValueAt, która zwraca rozmiar listy powiązanej,
//tak aby podany w przykładzie program zadziałał
//(rozwiązaniem jest tylko brakujący kod!)

//./value ➞ WYDRUKUJE:
//Wartość elementu o indeksie 2: 5
//Wartość elementu o indeksie 1: 10

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

class LinkedList {
private: Node * head = nullptr;
public:
// Destruktor
~LinkedList() {
	Node * current = head;
	while (current != nullptr) {
		Node * next = current -> getNext();
		delete current;
		current = next;
	}
}

// Metoda dodająca element na początek listy
void addToFront(int value) {
head = new Node(value, head);
}
// ROZWIĄZANIE POCZATEK
int getValueAt(int n){
	int counter = 0;
	Node* current = head;
	while(current != nullptr){
		Node* next = current -> getNext();
		if(counter == n){
			return current -> getValue();
		}
		current = next;
		counter++;
	}	
	return -1;
}
// ROZWIĄZANIE KONIEC
};

int main() {
LinkedList list;
list.addToFront(5);
list.addToFront(10);
list.addToFront(15);

std::cout << "Wartość elementu o indeksie 2: " << list.getValueAt(2) << std::endl;
std::cout << "Wartość elementu o indeksie 1: " << list.getValueAt(1) << std::endl;

return 0;

}