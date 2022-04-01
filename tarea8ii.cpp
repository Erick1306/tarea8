//código, nombres ,apellidos ,dirección ,telefono
#include <iostream>
using namespace std;
const char *nombre_archivo ="archivo.dat";
struct Estudiante{
        char nombre[15];
        char apellido[15];
        int edad;
        char direccion[15];
        int telefono;
        int codigo;
};
void crear();
int main()
{
    Estudiante estudiante[5];
    for (int i = 0; i < 5; i++){
        cout <<"Escriba el Nombre "<<i+1<<":";
        cin >> estudiante[i].nombre;

        cout <<"\nEscriba el Apellido "<<i+1<<":";
        cin >> estudiante[i].apellido;

        cout <<"\nEscriba la Edad de "<<i+1<<":";
        cin >> estudiante[i].edad;

        cout <<"\nEscriba direccion "<<i+1<<":";
        cin >> estudiante[i].direccion;

        cout <<"\nEscriba el Telefono de "<<i+1<<":";
        cin >> estudiante[i].telefono;

        cout <<"\n Escriba el codigo "<<i+1<<":";
        cin >> estudiante[i].codigo;

        cout <<endl;
    }

    cout<<"El registro de persona almacenada en archivo dat es: \n\n";

    for (int i = 0; i < 5; i++){
        cout<<"\t"<<estudiante[i].nombre;
        cout<<"\t"<<estudiante[i].apellido;
        cout<<"\t"<<estudiante[i].edad;
        cout<<"\t"<<estudiante[i].direccion;
        cout<<"\t"<<estudiante[i].telefono<<"\n\n";
        cout<<"\t"<<estudiante[i].codigo;

        system("PAUSE");
   }
void crear(){
        FILE* archivo= fopen(nombre_archivo,"ab");
        Estudiante estudiante;
        char continuar;
        string nombre, apellido;
        }
    }

}
