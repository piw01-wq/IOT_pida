#include <iostream>
using namespace std;
int main() {
  int n;
  unsigned long long faktorial = 1; // gunakan tipe besar untuk hasil besar
  cout << "=== Program menghitung faktorial ===" << endl;
  cout << "Masukkan bilangan positif: ";
  cin >> n;
  if (n < 0) {
      cout << "faktorial tidak terdefinisi untuk bilangan negatif." << endl;
  } else {
    for (int i = 1; i <= n; i++) {
   faktorial *= i;
    }
       
  }
    cout << "faktorial dari " << n << " adalah: " << faktorial << endl;

return 0;
}
