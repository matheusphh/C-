#include <iostream>
using namespace std;

int main() {
  int media=0, idade, div=0, calc;

  while (idade != 0){
    cout << "Digite as idades dos pessoas!, digite 0 para parar\n";
    cin >> idade;
    media = media + idade;
    div = div + 1;
  }

  calc = media / div;

  if (calc <= 25){
    cout << "A turma é jovem";
  }
  if (calc > 25 && calc <= 60){
      cout << "A turma é adulta";
  }
  if(calc > 60){
    cout << "A turma é idosa";
  }
}
