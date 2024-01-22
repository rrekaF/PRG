// ----------- ZAD306 -----------
//(repetition) Oblicz wyrażenie podane w argumentach jako <a href="https://pl.wikipedia.org/wiki/Odwrotna_notacja_polska">ONP</a> używając stosu (klasy <code>Stack</code>) i wydrukuj wynik
//		

//./oblicz 1 2 + ➞ WYDRUKUJE: 3
//./oblicz 1 2 + 3 4 5 / * - ➞ WYDRUKUJE: 0.6
//./oblicz 1 2 + 3 4 5 / * - 6 + ➞ WYDRUKUJE: 6.6


#include <iostream>

class Node {
	private:
		double value;
		Node* next;

	public:
		Node(double value, Node* next) {
			this->value=value;
			this->next=next;
		}
		double getValue() {
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
		
		void push(double value) {
			top = new Node(value, top);
		}
		
		bool isEmpty() const {
			return top == nullptr;
		}
		
		double peek() {
			return top->getValue();
		}
		
		double pop() {
			if (top == nullptr) {
				throw std::runtime_error("Stack is empty");
			}
			double value = top->getValue();
			Node* temp = top;
			top = top->getNext();
			
			delete temp; // pamiętaj o zwolnieniu pamięci
			return value;
		}
};
// ROZWIĄZANIE POCZATEK
int main(int argc, char** argv){
	Stack stack;
	double a, b;
	for(int i = 1; i < argc; i++){
		
		switch(argv[i][0]){
			case '/':
				a = stack.pop();
				b = stack.pop();
				stack.push(b/a);
				break;
			case '*':
				a = stack.pop();
				b = stack.pop();
				stack.push(a*b);
				break;
			case '+':
				a = stack.pop();
				b = stack.pop();
				stack.push(a+b);
				break;
			case '-':
				a = stack.pop();
				b = stack.pop();
				stack.push(b-a);
				break;
			default:
				stack.push(std::stod(argv[i]));
		}
		
	}
	std::cout << stack.pop();
	
}
// ROZWIĄZANIE KONIEC
