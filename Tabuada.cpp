#include <iostream>
using namespace std;

int main() {
  int num, soma, subt, mult;
  float div;

  cout << "Digite seu numero:";
  cin >> num;

  cout << "Soma\n";

  for (int i = 1; i <= 10; i++) {
    soma = i + num;
    cout << soma << "\n";
  }

  cout << "Subtra��o\n";
  for (int i = 1; i <= 10; i++) {
    subt = num - i;
    cout << subt << "\n";
  }

  cout << "Multiplica��o\n";
  for (int i = 1; i <= 10; i++) {
    mult = i * num;
    cout << mult << "\n";
  }

  cout << "Divis�o\n";
  for (int i = 1; i <= 10; i++) {
    div = num / i;
    cout << div << "\n";
  }
}
