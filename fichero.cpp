#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream archivo;
    string nombre_archivo, frase;

    cout << "Digite el nombre del archivo \n";
    getline(cin, nombre_archivo);

    archivo.open(nombre_archivo.c_str(), ios::out);

    if(archivo.fail()){
        cout << "Los siento pero el archivo se pudo concluir \n";
    }
    cout << "Digite las frases que quiera en su archivo, 0 para finalizar";
    while(true){
        getline(cin, frase);
        if(frase == "0"){
        cout << "Gracias por utilizar mi prigrama hermano \n";    
            break;
        }
        archivo << frase << endl;
    }

    archivo.close();
    return 0;
}