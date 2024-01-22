// ----------- ZAD32 -----------
//(string) Zaparkowałeś samochód na parkingu i chcesz obliczyć całkowity koszt biletu.
//Zasady rozliczeń są następujące:
//	Opłata za wjazd na parking wynosi 2;
//	Pierwsza rozpoczęta godzina kosztuje 3;
//	Każda kolejna rozpoczęta godzina kosztuje 4.
//Wjechałeś na parking o godzinie E i wyjechałeś o godzinie L.
//Czasy są reprezentowane jako ciągi w formacie „GG:MM”
//(gdzie „GG” to dwucyfrowa liczba z zakresu od 0 do 23, która oznacza godziny, a „MM” to dwucyfrowa liczba z zakresu od 0 do 59, oznaczająca minuty).
//Program ma wydrukować całkowity koszt rachunku za parking od wjazdu w czasie E do wyjazdu w czasie L.
//Program przyjmuje E i L w parametrach programu

//Np.
//./parking 10:00 13:21 ➞ WYDRUKUJE: 17
//./parking 09:42 11:42 ➞ WYDRUKUJE: 9

//Możesz założyć, że:
//godziny E i L są zawsze w formacie „GG:MM”;
//E < L i są tego samego dnia.



// ROZWIĄZANIE POCZATEK
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	std::string beg = argv[1], end = argv[2];
	int beg_h = std::stoi(beg.substr(0, 2));
	int beg_m = std::stoi(beg.substr(3, 2));
	int end_h = std::stoi(end.substr(0, 2));
	int end_m = std::stoi(end.substr(3, 2));

	int fee = 2;
	int minutes = 0;
	
	while(beg_h != end_h || beg_m != end_m){
		if(beg_m == 60){
			beg_h += 1;
			beg_m = 0;
		}
//		std::cout << beg_h << " : " << beg_m << std::endl;
		beg_m++;
		minutes++;
	}
	
	int hours = minutes / 60;
	if(minutes % 60 != 0) hours += 1;
	
	if(hours > 0){
		fee += 3;
		hours--;
	}
	
	while(hours > 0){
		fee += 4;
		hours--;
	}
	
	std::cout << fee;
	return 0;
	
	
}


// ROZWIĄZANIE KONIEC
