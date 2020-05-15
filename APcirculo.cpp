#include "iostream"
#include "cmath"

using namespace std;

int main(void)
{

    double ra, ar, pe;
    cout << endl << "Este programa sirve para calcular el area y el perimetro de un circulo" << endl;
    cout << endl << "Para ello, ingresa por favor el Radio del circulo cuyos valores desea calcular. Tenga en cuanta que el radio debe ser positivo" << endl;
    
    cin >> ra;

    ar = M_PI * pow(ra,2);
    pe = 2 * M_PI * ra;

    cout << endl << "El valor del area es de: " << ar << endl;
    cout << endl << "El valor del perimetro es de: " << pe << endl;

    return 0;
}