#include <iostream>
using namespace std;

int luas(int sisi) {
  return sisi * sisi;
}

doubel luas(int panjang * lebar) {
  return panjang * lebar;
}

doubel luas(doubel jari) {
  return 3.14 * jari * jari;
}

int main() {
  int sisi, panjang, lebar;
  doubel jari;

  cout << "Masukkan sisi persegi : ";
  cin >> sisi;
  cout << "Luas persegi = " << luas(sisi) << endl;

  cout << "\nMasukkan panjang persegi panjang : ";
  cin >> panjang;
  cout << "Masukkan lebar persegi pangjang : ";
  cin >> lebar;
  cout << "Luas persegi panjang = " << luas(panjang, lebar) << endl;

  cout << "\nMasukkan jari - jari lingkaran : ";
  cin >> jari;
  cout << "luas lingkaran = " << luas(jari) << endl;

  return 0;
}
