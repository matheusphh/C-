#include <iostream>
using namespace std;

int main() {
  float lula=0, bolso=0, ciro=0, simone=0,nulo=0,branco=0,voto;
  float pbrancos, pnulos, cont=0;

  while (voto != 0){
  cout << "Escolha o seu candidato\n";
  cout << "1-Lula, 2-Bolsonaro, 3-Ciro ou 4-Simone\n";
  cin >> voto;
  cout << "\n";
    if (voto == 0){
      break;
    }
    if (voto == 1){
      lula++;
    }
    if (voto == 2){
      bolso++;
    }
    if (voto == 3){
      ciro++;
    }
    if (voto == 4){
      simone++;
    }
    if (voto == 5){
      nulo++;
    }
    if (voto == 6){
      branco++;
    }
    cont = cont + 1;
  }
  cout << "Lula teve " << lula << " votos\n";
  cout << "Bolsonaro teve " << bolso << " votos\n";
  cout << "Ciro teve " << ciro << " votos\n";
  cout << "Simone teve " << simone << " votos\n";
  cout << nulo << " votos nulos\n";
  cout << branco << " votos brancos\n\n";


  pnulos = (nulo * 100) / cont;
  pbrancos = (branco * 100) / cont;

  cout << pnulos << "% de votos nulos\n";
  cout << pbrancos << "% de votos brancos\n";
}
