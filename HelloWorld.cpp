// Membuat project untuk menampilkan tulisan “Hello World <nama mahasiswa>”

#include <iostream>
#include <string>
using namespace std;
int main() {
  string namaMahasiswa;
  cout << "Masukkan namamu: ";
  getline(cin, namaMahasiswa);
  cout << "Hello world " << namaMahasiswa;
  return 0;
}
