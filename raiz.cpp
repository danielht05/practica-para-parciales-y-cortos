#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, r = 10, rsig, absdif;
    cout << "Programa para determinar la raiz cuadrada de un numero" << endl;
    cout << "Digite un numero" << endl;
    cin >> n;

    if (n < 0)
    {
        cout << "No existe una raiz para un numero negativo" << endl;
    }
    else
    r = 10;
        do
        {
            rsig = (n/r + r) / 2;
            absdif = abs(rsig - r);
            if(absdif >= 0.001)
            r = rsig;
        } while (absdif >= 0.0001);


    cout << "La raiz cuadrada de " << n << " es: " << rsig << endl;

    return 0;
}