#include <iostream>
#include <cmath> //untuk menggunakan fungsi pow() dan M_PI
using namespace std;
int main() {
  double jari_jari,luas;
cout << "masukkan jari-jari lingkaran: ";
cinn >> jari_jari;
luas = M_PI * pow(jari_jari, 2);
cout << "luas lingkaran dengan jari-jari " << jari_jari
    << " adalah " << luas << endl;
return 0;
}
