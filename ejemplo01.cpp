#include <iostream>
#include <cstdio> // Para printf y scanf
using namespace std;

int main() {
    string nombre;
    int edad;

    // Usando cin y cout (C++)
    cout << "Ingresa tu nombre (con cin): ";
    cin >> nombre;
    cout << "Hola " << nombre << ", tu nombre tiene " << nombre.length() << " letras." << endl;

    // Usando scanf y printf (C)
    printf("Ingresa tu edad (con printf/scanf): ");
    scanf("%d", &edad); // ¡No olvides el '&' para variables!
    printf("Tienes %d años. El año que viene tendrás %d.\n", edad, edad + 1);

    return 0;
}