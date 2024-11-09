/*Soal: Buatlah program C++ yang meminta pengguna memasukkan dua angka.
Kemudian menampilkan hasil penjumlahan, pengurangan, perkalian, dan pembagian dari kedua angka tersebut.*/
#include <iostream>
using namespace std;
int main() {
  int angkaPertama, angkaKedua;
  cout << "Masukkan dua angka: ";
  cin >> angkaPertama;
  cin >> angkaKedua;

  // penjumlahan
  double penjumlahan = angkaPertama + angkaKedua;
  cout << "\nHasil penjumlahan: " << penjumlahan;

  // pengurangan
  double pengurangan = angkaPertama - angkaKedua;
  cout << "\nHasil pengurangan: " << pengurangan;

  // perkalian
  double perkalian = angkaPertama * angkaKedua;
  cout << "\nHasil perkalian: " << perkalian;

  // pembagian
  double pembagian = angkaPertama / angkaKedua;
  cout << "\nHasil pembagian: " << pembagian;

  return 0;
}