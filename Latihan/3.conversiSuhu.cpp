#include <iostream>
using namespace std;
int main() {
  double suhu;
  int pilihan;
  cout << "=== Program Konversi Suhu ==="<< endl;
  cout << "Pilih Satuan Asal:" << endl;
  cout << "1, Celsius" << endl;
  cout << "2, Fahrenheit" << endl;
  cout << "3, Kelvin" << endl;
  cout << "Masukkan Pilihan (1-3): ";
  cin >> pilihan;
  cout << "Masukkan nilai suhu: ";
  cin >> suhu; cout << fixed;
  switch (pilihan) {
case 1: //celcius
    cout << "\nDari Celsius:" << endl;
    cout << "Fahrenheit: " << (suhu * 9/5) + 32 << endl;
    cout << "Kelvin: " << suhu + 273.15 << endl;
    break;
case 2: //Fahrencheit
    cout << "\nDari Fahrenheit:" << endl;
    cout << "celcius: " << (suhu - 32) * 5/9 << endl;
    cout << "Kelvin: " << (suhu -32) * 5/9 + 273.15 << endl;
    break;
case 3: //Kelvin
    cout << "\nDari Kelvin:" << endl;
    cout << "Celcius: " << suhu - 273.15 << endl;
    cout << "Fahrenheit: " << (suhu - 273.15) * 9/5 + 32 << endl;
    break;
default:
    cout << "Pilihan tidak valid!" << endl;
    }
return 0;
}
    
    
