// ----------- ZAD31 -----------
//(string) Strasznie nie lubię węży! Dlatego nie podoba i się że ci pajtonowcy piszą wszytko Snake casem.
//Napisz mi program który przekonwertuje SnakeCase do CamelCase.
//Przekonwertuj pierwszy argument programu, napisany snakecase do CamelCase i wydrukuj.

//Przykład 
//./snakes-sucks "is_modal_open" ➞ WYDRUKUJE: "isModalOpen"
//./snakes-sucks "follow_the_white_rabbit" ➞ WYDRUKUJE: "followTheWhiteRabbit"


// ROZWIĄZANIE POCZATEK
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	std::string snakeCase = argv[1];
	std::cout << snakeCase[0];
	for(int i = 1; i < snakeCase.length(); i++){
		if(snakeCase[i - 1] == '_'){
			std::cout << char(snakeCase[i] - 32);
		} else {
			if(snakeCase[i] != '_'){
				std::cout << snakeCase[i];
			}
		}	
	}
	return 0;
}
// ROZWIĄZANIE KONIEC
