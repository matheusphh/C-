#include <iostream>
using namespace std;

int main() {

  int i = 0, ele, a = 0, b = 0, c = 0, voto;

  cout << "Quantos aleitores existem?\n";
  cin >> ele;

  while (i < ele) {

    cout << "Escolha seu cantidato Lula-13, Bolsonaro-22 ou Simone-3:\n";
    cin >> voto;

    if (voto == 13) {
      a = a + 1;
    }
    if (voto == 22) {
      b = b + 1;
    }
    if (voto == 3) {
      c = c + 1;
    }
    i = i + 1;
  }

  cout << "Lula teve " << a << " votos\n";
  cout << "Bolsonaro  teve " << b << " votos\n";
  cout << "Simone teve " << c << " votos\n";
}
