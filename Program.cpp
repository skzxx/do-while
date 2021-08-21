#include <iostream>

int main () {
  int AlphabetNumerical = 1;
  /* 
  Looping tidak terbatas...
  */
  do {
    std::cout << "Looping " << std::endl;
  } while (
    AlphabetNumerical < 10
    );
    /*
    Looping dengan batasan paksa.
    pada looping pertama 
    do while akan menggunakan indeks integer 1 lalu ditampilkan dan setelah itu
    akan menggunakan integer yang di deklarasikan dalam fungsi (do) lalu di check kondisi nya untuk ditamoilkan atau tidak.
    */
    do {
      std::cout << "Looping again" << std::endl;
      AlphabetNumerical = 28;
    } while (
      AlphabetNumerical < 10;
      );
      
      /*
      Menggunakan operator increment dan indeks pada setiap teks yang di looping
      
      */
    do {
      std::cout << "Fine looping, my friend  " << AlphabetNumerical <<  std::endl;
      AlphabetNumerical = AlphabetNumerical + 1;
    } while (
      AlphabetNumerical <= 10;
      )
    
    std::cin.get();
    return 0;
}