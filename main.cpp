#include <iostream>
#include "ingeniero.h"

using namespace std;

int main()
{  int opc;
    do
    {
    cout << endl;
    cout << "           MENU DE OPCIONES       " << endl;
    cout << endl;
    cout << "1.- Crear objeto clase ingeniero" << endl;
    cout << "2.- Uso del operador +  sobrecargado" << endl;
    cout << "3.- Uso del operador -  sobrecargado"<< endl;
    cout << "4.- Salir"<< endl;
    cout << "Por favor ingrese una de las opciones, de 1 a 4: ";
    cin >> opc;
    switch(opc)
           {
    case 1:{Ingeniero c1;
            c1.obtenerDatos();
            break;}
     case 2: {cout<< endl;
              Ingeniero c1(36,80), t1(40,90);
              Ingeniero c2;
              c2=c1+t1;
              c2.Imprimir();
          break;}
     case 3:{cout<< endl;
             Ingeniero c1(36,80), t1(40,90);
             Ingeniero c2;
             c2=c1-t1;
             c2.Imprimir();
        break;}
    case 4:cout<< endl;
        cout << "Fin del programa GRACIAS" << endl;
        cout<< endl;
        break;
      default: cout<< endl;
        cout << "Opcion desconocida! " << endl;
        break;
   }
} while (opc != 4);
    return 0;
}
