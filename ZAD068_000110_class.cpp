// ----------- ZAD110 -----------
//(class) Uzupełnij kod programu aby stos działał
//(rozwiązaniem jest tylko brakujący kod)

//./stos ➞ WYDRUKUJE: Że co? Że jak? no właśnie... 5 10 15

#include <iostream>
class Node {
	private:
		int value;
		Node* next;

	public:
// ROZWIĄZANIE POCZATEK
Node(int value, Node* next){
		this->value = value;
		this->next = next;
	}
	int getValue(){
		return value;
	}
	Node* getNext(){
		return next;
	}

// ROZWIĄZANIE KONIEC
};
				
int main() {
	// Umieszczenie trzech elementów na stosie - mamy dostęp tylko do najnowszego
	Node* last = new Node(15, nullptr);
	last = new Node(10, last);
	last = new Node(5, last);
	std::cout << "Że co? Że jak? no właśnie... "; // https://youtu.be/MXwrMXD0iqw?t=15
	// Wypisywanie elementów stosu
	while (last != nullptr) {
		std::cout << last->getValue() << " ";
		// zjęcie ostatniego elementu ze stosu
		last = last->getNext();
	}

	return 0;
}