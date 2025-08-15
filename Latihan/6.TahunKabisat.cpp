#include <iostream>
using namespace std;
bool isLeapYear(int year) {
  //Tahun kabisat jika:
  //1. HAbis dibagi 4 tetapi tidak habis dibagi 100,ATAu
  //2. Habis dibagi 400
  return (year % 4 == 0 && year % 100 !=0) || (year % 400 == 0);
}
int main() {
  int year;
  cout << "masukkan tahun: ";
  cin >> year;
      if (isLeapYear(year)) {
      cout << year << "adalah tahun kabisat." << endl;
} else {
      cout << year << " bukan tahun kabisat." << endl;
}
      return 0;
}
