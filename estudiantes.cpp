#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    string estudiante;
    float nota;
    int n;

    cout << "cuantos estudiantes vas a guardar? \n";
    cin >> n;
    cin.ignore();


    ofstream archivo("estudiantes.txt", ios::app);


    if (archivo.fail()){
        cout << "Lo siento, el archivo no pudo ser cargado \n";
        return 1;
    }

    for(int i = 1; i <= n; i++){
    cout << "Digite el nombre del estudiante: ";
    getline(cin, estudiante);
    cout << "Digite la nota del estudiante: ";
    cin >> nota;
    cin.ignore();

        archivo << i <<  "- Estudiante: " << estudiante << "\n" 
    << "nota: " << nota << "\n\n";

    }

    archivo.close();
    cout << "Los datos han sido guardados correctamente!";

    return 0;
}