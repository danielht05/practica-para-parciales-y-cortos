#include <iostream>
#include <cctype>

using namespace std;

int main()
{

    char letra;

    cout << "Digite una letra mayuscula o minuscula y el programa debera evaluarla" << endl;
    cin >> letra;

    if (isupper(letra))
    {
        cout << "La letra es mayuscula" << endl;
    }
    else if (islower(letra))
    {
        cout << "La letra es minuscula" << endl;
    }
    else
        cout << "Debe digitar una letra valida" << endl;

    return 0;
}