#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, i;
    bool esprimo;

    cout << "Determinar si un numero es primo" << endl;
    cout << "Digite un numero" << endl;
    cin >> n;

    if (n <= 0)
    {
        cout << "Digite un numero mayor que cero" << endl;
    }
    else{
    esprimo = true;
    i = 2;
    while (i <= (int) sqrt(n) && esprimo == true){
        if(n % i == 0)
            esprimo = false;
        i = i + 1;
    }

    /*for (i = 2; i <= (int) sqrt(n); i++){
        if(n % i == 0)
        esprimo = false;
    }*/

    if (esprimo == true)
    cout << n << " Es numero primo." << endl;
    else {
        cout << n << " No es numero primo." << endl;
    }
    }
    return 0;
}