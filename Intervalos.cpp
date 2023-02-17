#include <iostream>
using namespace std;

int main() {
  int a,b;
  cout << "Digite 2 numeros repectivamente, press enter apos cada um!\n";
  cin >> a;
  cin >> b;
  cout << "Os numeros do intervalo são: \n";

  if (a < b){
  for (a = a; a <= b; a++)
    cout << a << "\n";
  }
  else{
    for (b = b; b <= a; b++)
    cout << b << "\n";
  }
}
