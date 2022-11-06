#include <iostream>
using namespace std;

int main() {

  float salario, nsalario;
  
  cout << "Digite o salário:\n";
  cin >> salario;

  if (salario > 1600){
    nsalario = salario + 100;
  } else{
    if (salario <= 1212) {
      nsalario = (salario * 1.05) + 150;    
  } else {
      nsalario = (salario * 1.12) + 100;
  }
  }
  
  cout << nsalario;
}
