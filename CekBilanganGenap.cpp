/*Soal: Buatlah program C++ yang meminta pengguna memasukkan sebuah angka.
Periksa apakah angka tersebut genap atau ganjil. Tampilkan hasil
pemeriksaannya.*/
#include <iostream>
using namespace std;
int main() {
  int angka;
  cout << "Masukkan sebuah angka: ";
  cin >> angka;
  if (angka % 2 == 0) {
    cout << "Angka tersebut adalah genap";
  } else {
    cout << "Angka tersebut adalah ganjil";
  }

  return 0;
}