// ----------- ZAD47 -----------
//(repetition) (powtórka) Napisz program, który zamienia każdą literę w danym łańcuchu znaków przekazanym w agrumencie na następującą po niej literę alfabetu (tj. a staje się b, p staje się q, z staje się a)
//Przykład:

//./string_inc czy1Ja2wieM ➞ WYDRUKUJE: daz1Kb2xjfN


// ROZWIĄZANIE POCZATEK
#include <iostream>
#include <string>

// 65 - 90
// 97 - 122

int main(int argc, char* argv[]){
  std::string chars = argv[1];

  for(int i = 0; i < chars.size(); i++){
    if(chars[i] >= 65 && chars[i] < 90){
      chars[i] += 1;
    } else {
      if(chars[i] == 90) {
        chars[i] = 65;
      }
    }
    if(chars[i] >= 97 && chars[i] < 122){
      chars[i] += 1;
    } else{
      if(chars[i] == 122){
        chars[i] = 97;
      }
    }
  }
  std::cout << chars;
  return 0;
}

// ROZWIĄZANIE KONIEC
