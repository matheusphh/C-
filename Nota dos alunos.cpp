#include <iostream>
using namespace std;

int main() {

  int nota;

  cout << "Digite a nota do aluno:\n";
  cin >> nota;

  if (nota == 10) {
    cout << "A";
  }

  if (nota >= 9 && nota <= 9.9) {
    cout << "B";
  }

  if (nota >= 8 && nota <= 8.9) {
    cout << "C";
  }

  if (nota >= 7 && nota <= 7.9) {
    cout << "D";
  }

  if (nota >= 6 && nota <= 6.9) {
    cout << "E";
  }

  if (nota >= 5 && nota <= 5.9) {
    cout << "F";
  }

  if (nota >= 4 && nota <= 4.9) {
    cout << "G";
  }

  if (nota >= 3 && nota <= 3.9) {
    cout << "H";
  }

  if (nota >= 2 && nota <= 2.9) {
    cout << "I";
  }

  if (nota >= 1 && nota <= 1.9) {
    cout << "J";
  }

  if (nota >= 0.1 && nota <= 0.9) {
    cout << "K";
  }

  if (nota == 0) {
    cout << "L";
  }

  cout << "\n";

  if (nota >= 8) {
    cout << "Aprovado! Parabéns";
  } else {
    if (nota >= 6 && nota < 8) {
      cout << "Aprovado";
    }
    if (nota >= 3 && nota < 6) {
      cout << "Reprovado! Estudar mais";
    }
    if (nota < 3) {
      cout << "Reprovado! Estudar muito mais!";
    }
  }
}
