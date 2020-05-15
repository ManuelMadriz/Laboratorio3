#include "iostream"

using namespace std;

int main(void)

{
    int a, b, c;
    double prom;/*Como el promedio puede ser un numero con decimales, declaro esta variables como real*/

    cout << endl << "Este programa te servira para encontrar el promedio de tres numeros enteros" << endl;

    cout << endl << "Por favor, ingrese el primer numero entero" << endl;
    cin >> a;

    cout << endl << "Ingrese el segundo numero entero" << endl;
    cin >> b;

    cout << endl << "Ingrese el tercer y ultimo numero entero" << endl;
    cin >> c;

    prom = (float)(a+b+c)/3;

    cout << endl << "El promedio de los tres numeros enteros es: " << prom << endl;
    
    return 0;
}
