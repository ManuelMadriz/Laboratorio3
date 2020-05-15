#include "iostream"
#include "cmath"

using namespace std;

int main(void)
{
    double a, b, c, res1, res2;
    
    cout << endl << "Este programa te servira para resolver una ecuacion de la forma ax^2 + bx +c = 0" << endl;
    
    cout << endl << "Por favor, ingresa el valor del coeficiente de la variable elevada al cuadrado. Ten en cuenta que no puede ser 0" << endl;
    /*Soy conciente que lo mejor hubiera sido usar condicioneles como if_else y/o bucles para delimitar bien los valores
    ingresados, en este y otros ejercicios de la tarea, pero dado que todavia no los hemos visto en clases, considero
    adecuado dejarlo asi y solo establecer "recordatorios" al usuario*/
    cin >> a; 

    cout << endl << "Ingresa el valor del coeficiente de la varible elevada a 1. Asegurate que sea un valor valido" << endl;
    cin >> b;

    cout << endl << "Ingrese el valor del termino independiente" << endl;
    cin >> c;

    res1 = ( -b + sqrt( pow( b, 2)- (4 * a * c))) / (2 * a);

    res2 = ( -b - sqrt( pow( b, 2)- (4 * a * c))) / (2 * a);

    cout << endl << "El primer valor de x es: " << res1 << endl;
    cout << endl << "El segundo valor de x es: " << res2 << endl;

    cout << endl << "Si has obtenido resultados no validos, entonces la respuesta no es un numero real. Intenta con otros datos" << endl;
    /*Dado que no he usado condicionales, he dejado este mensaje en caso de errores, como a=0 o interior de la raiz negativo*/

    return 0;

}