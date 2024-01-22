// ----------- ZAD305 -----------
//(repetition) Napisz program drukujący choinkę używając rekurencji
//Nie używaj pętli

//Program ma drukwać następujący wzór:

//./choinka 4 ➞ WYDRUKUJE: 
//      1
//    2 3
//  4 5 6
//7 8 9 10


// ROZWIĄZANIE POCZATEK
#include <iostream>
/*
./choinka 4 ➞ WYDRUKUJE: 
      1
    2 3
  4 5 6
7 8 9 10
*/
int print_num(int times, int num){
	if(times > 0){
		std::cout << num;
		std::cout << " ";
		num = print_num(--times, ++num);
		
	}
	return num;
}
void print_space(int times){
	if(times > 0){
		std::cout << " ";
		print_space(--times);
	}
}
int print_line(int n, int line, int h){
	print_space((h*2)-(2* line));
	n = print_num(line, n);
	std::cout << std::endl;
	return n;
}

void choinka(int h, int line = 1, int n = 1){
	if(line <= h){
		n = print_line(n, line, h);
		line++;
		choinka(h, line, n);
	}

}
int main(int argc, char** argv){
	
	choinka(std::stoi(argv[1]));
	return 0;
}
// ROZWIĄZANIE KONIEC
