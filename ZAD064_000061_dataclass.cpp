// ----------- ZAD61 -----------
//(dataclass) 
//Napisz strukturę choinki tak aby program działał
//(rozwiązaniem jest tylko brakujący kod)


//./choinka 2.2 jodla 5 1 ➞ WYDRUKUJE:
//Tabela z danymi o choinkach:
//Lp.	Wysokość	Rodzaj	Ilość bombek	Ilość światełek
//1	2.2		jodla	5		1


#include <iostream>
#include <string>

using namespace std;
// ROZWIĄZANIE POCZATEK
class Choinka{
public:
	float wysokosc;
	std::string rodzaj;
	int ilosc_bombek;
	int ilosc_swiatelek;	
};
// ROZWIĄZANIE KONIEC
int main(int argc, char* argv[])
{
	// Sprawdzenie, czy liczba argumentów jest odpowiednia
	if (--argc % 4)
	{
		cout << "Nieprawidłowa liczba argumentów!" << endl;
		return 1;
	}

	// Tworzenie tablicy struktur choinek
	Choinka choinki[argc/4];

	// Wczytywanie danych o choinkach z argumentów
	for (int i = 0; i < argc/4; i++)
	{
		choinki[i].wysokosc = stof(argv[i * 4 + 1]);
		choinki[i].rodzaj = argv[i * 4 + 2];
		choinki[i].ilosc_bombek = stoi(argv[i * 4 + 3]);
		choinki[i].ilosc_swiatelek = stoi(argv[i * 4 + 4]);
	}

	// Wyświetlenie tabeli z danymi o choinkach
	cout << "Tabela z danymi o choinkach:" << endl;
	cout << "Lp.\tWysokość\tRodzaj\tIlość bombek\tIlość światełek" << endl;
	for (int i = 0; i < argc/4; i++)
		cout << i + 1 << "\t" << choinki[i].wysokosc << "\t\t" << choinki[i].rodzaj << "\t" << choinki[i].ilosc_bombek << "\t\t" << choinki[i].ilosc_swiatelek << endl;

}