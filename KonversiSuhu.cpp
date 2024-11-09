/*Soal:

Buatlah program C++ yang meminta pengguna memasukkan suhu dalam Celsius.

Konversikan suhu tersebut ke Fahrenheit.

Tampilkan hasil konversi kepada pengguna*/

#include <iostream>
using namespace std;
int main() {
  float celcius;
  cout << "Masukkan suhu dalam Celcius: ";
  cin >> celcius;
  float fahrenheit = (celcius * 9/5) + 32;
  cout << "Suhu dalam Fahrenheit: " << fahrenheit;
  return 0;
}