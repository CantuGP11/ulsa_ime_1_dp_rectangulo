#include <iostream>
using namespace std;

int main() {
    double ancho;
    double alto;
    double area;
    double perimetro;

    cout << "Calculadora de area y perimetro de un rectangulo" << endl;

    // Pedir ancho hasta que sea valido
    do {
        cout << "Ingresa el ancho: ";
        cin >> ancho;

        if (ancho <= 0) {
            cout << "El ancho debe ser mayor que 0." << endl;
        }

    } while (ancho <= 0);

    // Pedir alto hasta que sea valido
    do {
        cout << "Ingresa el alto: ";
        cin >> alto;

        if (alto <= 0) {
            cout << "El alto debe ser mayor que 0." << endl;
        }

    } while (alto <= 0);

    // Calcular area y perimetro
    area = ancho * alto;
    perimetro = 2 * (ancho + alto);

    // Mostrar resultados
    cout << "Area: " << area << endl;
    cout << "Perimetro: " << perimetro << endl;

    return 0;
}