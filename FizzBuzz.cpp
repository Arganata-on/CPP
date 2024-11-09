/*Soal:

Buatlah program C++ yang meminta pengguna memasukkan sebuah angka.

Tampilkan "Fizz" jika angka tersebut dapat dibagi dengan 3.

Tampilkan "Buzz" jika angka tersebut dapat dibagi dengan 5.

Tampilkan "FizzBuzz" jika angka tersebut dapat dibagi dengan kedua 3 dan 5.

Tampilkan angka tersebut jika tidak dapat dibagi dengan 3 ataupun 5.*/

#include <iostream>
using namespace std;
int main() {
  int angka;
  cout << "Masukkan sebuah angka: ";
  cin >> angka;
  if (angka % 3 == 0 && angka % 5 == 0) {
    cout << "FizzBuzz";
  } else if (angka % 3 == 0) {
    cout << "Fizz";
  } else if (angka % 5 == 0) {
    cout << "Buzz";
  } else {
    cout << angka;
  }

  return 0;
}
