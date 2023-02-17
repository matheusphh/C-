#include <iostream>
using namespace std;

int main() {
  float a, b, c;

  cout << "Digite o preço de 3 produtos, pessione enter apos cada um\n";
  cin >> a;
  cin >> b;
  cin >> c;

  if (a < b && a < c) {
    cout << "Compre o primeiro produto";
  }
  if (b < a && b < c) {
    cout << "Compre o segundo produto";
  }
  if (c < b && c < a) {
    cout << "Compre o terceiro produto";
  }
}
