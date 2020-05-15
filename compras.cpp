#include "iostream"

using namespace std;

int main(void)
{
    string producto;
    unsigned int cantidad;
    double precio, total;

    cout << endl << "Este programa te servira para calcular el total pagar de tu compra. Para ello, por favor contesta las siguientes preguntas." << endl;
    cout << endl << "Si obtiene un numero negativo, significa que la tienda le debe dinero a usted" << endl;/*El usuario puede ingresar numeros negativos en el precio, por lo que dejo esta pequeña broma*/

    cout << endl << "Que producto quieres comprar?" << endl;/*No he abierto signo de interrogacion ni usado acentos por que al ejecutar el progrma aparecian otros simbolos en su lugar*/
    cin >> producto;

    cout << endl << "Cual era el precio, en dolares, de cada unidad o paquete de ese producto?" << endl;
    cin >> precio;

    cout << endl << "Cuantas unidades o paquetes comprastes?" << endl;
    cin >> cantidad;

    total = precio * cantidad;

    cout << endl << "El total a pagar por sus " << producto << " es de: " << total << " dolares." << endl;
   
    return 0;
}