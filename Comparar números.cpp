#include <iostream>
using namespace std;

int main() { 

int num1, num2;
  
  cout << "Digite o primeiro numero:\n"; 
  cin >> num1;

  cout << "Digite o segundo numero:\n"; 
  cin >> num2;

  if (num1 == num2){
    cout << "Os numeros são iguais!";
  }
  if (num1 > num2){
    cout << "O primeiro numero é maior!";
  }
  if (num1 < num2){
    cout << "O segundo numero é maior!";
  }
  
  return 0;
}
