#include <iostream>
using namespace std;

int numeros, resultado, numero1 = 1, numero2 = 0;
/*Suma de los Primeros N Números
Solicita un número N al usuario y calcula la suma de los primeros N números naturales.*/

int main()
{
    cout << "Cuantos numeros desea sumar dentro de los numeros naturales" << endl;
    cin >> numeros;

    if (numeros <= 0)
    {
        cout << "Jajaja que gracioso, sea serio por favor" << endl;
    }
    else
    {
        for (int i = 0; i < numeros; i++)
        {
            numero1 = numero1 + (numero2);
            numero2 = numero1 + 1;
            cout << "La suma total es: " << numero1 << endl;
        }
    }

    return 0;
}