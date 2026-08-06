#include <iostream>

using namespace std;

int main() {

  string nombre;

  cout << "Ingresa tu nombre (con cin): ";
  cin >> nombre;
  cout << "Hola, " << nombre;
  cin.get(); 

  return 0;

}