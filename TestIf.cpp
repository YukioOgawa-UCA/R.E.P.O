#include <iostream>
using namespace std;

float consumo, tarifa;

/*Tarifa de Luz Eléctrica
Calcula la tarifa según el consumo: menor a 100 kWh, tarifa baja; entre 100 y 200 kWh, tarifa media; más de 200 kWh, tarifa alta.*/

int main()
{
    cout << "Cual es tu consumo energetico mensual en kWh" << endl;
    cin >> consumo;
    cout << "=================================================" << endl;
    cout << "Su consumo en KiloWatts son de: " << consumo << endl;

    if (consumo < 0)
    {
        cout << "Consumo imposible, no sea chistocito" << endl;
    }
    else
    {
        if (consumo < 100)
        {
            tarifa = consumo * 2.5;
            cout << "Su tarifa ha sido baja, equialente a: $ " << tarifa << endl;
        }
        else if (consumo < 200)
        {
            tarifa = consumo * 3.0;
            cout << "Su tarifa ha sido media, equialente a: $ " << tarifa << endl;
        }
        else
        {
            tarifa = consumo * 4.8;
            cout << "Su tarifa ha sido alta, equialente a: $ " << tarifa << endl;
        }
    }

    cout << "=================================================" << endl;

    return 0;
}