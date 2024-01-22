// ----------- ZAD24 -----------
//(loop) Napisz program, który wydrukuje kwadratową macierz z zerami na głównej przekątnej, jedynkami tuż nad i pod główną przekątną, dalej dwójkami itd. Wielkość macierzy ma być podowana w parametrze programu

//./matrix 8 ➞ WYDRUKUJE:
//0 1 2 3 4 5 6 7
//1 0 1 2 3 4 5 6
//2 1 0 1 2 3 4 5
//3 2 1 0 1 2 3 4
//4 3 2 1 0 1 2 3 
//5 4 3 2 1 0 1 2
//6 5 4 3 2 1 0 1  
//7 6 5 4 3 2 1 0 



// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char* argv[]){
	int arr[100][100] = {0};
	int size = std::stoi(argv[1]);

	int row = 0, col = 1, num = 1;

	for (int num = 0; num < size; num++){
		for (int i = 0; i < size; i++)
		{
			arr[i][i+num] = num;
			arr[i + num][i] = num;
		}
	}
		for (int a = 0; a < size; a++)
		{
			for (int b = 0; b < size; b++)
			{
				std::cout << arr[a][b] << " ";
			}
			std::cout << std::endl;
		}

		return 0;
}
// ROZWIĄZANIE KONIEC
