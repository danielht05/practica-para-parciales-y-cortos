#include <iostream>

using namespace std;

int main()
{
    // Definimos las variables
    int opcion;
    int saldo = 1000;
    int saldo_nuevo;
    int retirar;
    int depositar;

    // Indicaciones al usuario del programa
    cout << "Por favor digite una de las siguientes opciones" << endl;
    cout << "1. Consultar saldo" << endl;
    cout << "2. Depositar dinero" << endl,
        cout << "3. Retirar dinero" << endl;
    cin >> opcion;

    // Empleando la funcion switch
    switch (opcion)
    {
    case 1:
        // Se muestra la cantidad predeterminada del programa
        cout << "CONSULTA DE SALDO ACTUAL";
        cout << "Su saldo actual es de: $" << saldo << endl;
        break;
    case 2:
        // El usuario debera digitar la cantidad que desee depositar
        cout << "DEPOSITAR DINERO" << endl;
        cout << "Digite la cantidad a depositar" << endl;
        cin >> depositar;
        if (depositar > 0)
        {
            // si el usuario digita lo correcto entonces
            saldo_nuevo = (saldo + depositar);
            cout << "Su saldo ahora es: $" << saldo_nuevo;
        }
        // de lo contrario mostrar lo siguiente
        else
            cout << "Debe digitar una cantidad mayor a cero" << endl;
        break;
    case 3:
        // el usuario quiere retirar dinero
        cout << "RETIRAR DINERO" << endl;
        cout << "Digite la cantidad que desea retirar" << endl;
        cin >> retirar;
        // si el usuario digita cantidades correctas hacer lo siguiente
        if (retirar > 0)
        {
            if (retirar < saldo)
            {
                saldo_nuevo = (saldo - retirar);
                // se muestra el siguiente mensaje
                cout << "Fondos retirados, su nuevo saldo ahora es: $" << saldo_nuevo << endl;
            }
            else
                // si no mostrar el siguiente mensaje
                cout << "Fondos insuficientes" << endl;
        }
        else
            // de lo contrario se muestra el siguiente mensaje si la cantidad ingresada es menor a 0
            cout << "Debe ser una cantidad mayor a cero" << endl;

        break;
    default:
        // si el usuario digita una cantidad incorrecta entonces mostrar el siguiente mensaje
        cout << "debe digitar una de las opciones validas" << endl;
        return 0;
    }
    return 0;
}