#include <iostream>
using namespace std;

int main() {

  int opera, num1, num2;

  cout << "Escolha a operação 1(+), 2(-), 3(x) ou 4(/)\n";
  cin >> opera;

  cout << "Escola o primeiro numero:\n";
  cin >> num1;

  cout << "Escola o segundo numero:\n";
  cin >> num2;

  cout << "O resultado é: ";

  if (opera == 1) {
    cout << num1 + num2;
  }

  else if (opera == 2) {
    cout << num1 - num2;
    return 0;
  }

  if (opera == 3) {
    cout << num1 * num2;
  }

  if (opera == 4) {
    cout << num1 / num2;
  }
}