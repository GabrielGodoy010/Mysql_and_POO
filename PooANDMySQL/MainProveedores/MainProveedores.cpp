#include <iostream>
#include <string>
#include "Proveedor.h"
using namespace std;

int main()
{
    
    int selec=0, bus=0, id=0;
    char op = 's';
    string nom, n, dir, tel;
    
    do {
        system("cls");
        cout << "\n\t\t___________________________" << endl;
        cout << "\n\t\t MENU PROVEEDORES " << endl;
        cout << "\n\t\t___________________________" << endl;
        cout << "\n\t\t1. Ingrese Proveedor" << endl;
        cout << "\n\t\t2. Ver Base De Datos" << endl;
        cout << "\n\t\t3. Modificar Datos" << endl;
        cout << "\n\t\t4. Eliminar Proveedor" << endl;
        cout << "\n\t\t0. Salir" << endl;
        cin >> selec;
        cin.ignore();

        if (selec == 1) {
            char op = 's';
            system("cls");

            do {
                cout << "\n\tIngrese Proveedor:                ";
                getline(cin, nom);
                cout << "\n\tIngrese Nit:         ";
                getline(cin, n);
                cout << "\n\tIngrese Direccion:   ";
                getline(cin, dir);
                cout << "\n\tIngrese Numero De Telefono:        ";
                getline(cin, tel);

                Proveedor pro = Proveedor(id, nom, n, dir, tel, bus);
                pro.crear();
                cout << endl << "\n\t\tDesea ingresar otro proveedor (s/n):  ";
                cin >> op;
                cin.ignore();
            } while (op == 's' || op == 'S');
        }
        else if (selec == 2) {
            system("cls");
            Proveedor pro = Proveedor();
            pro.leer();

            system("pause");

        }
        else if (selec == 3) {

            char b = 's';

            system("cls");
            do {
                cout << "Ingrese ID De Proveedor Que Desea Modificar: ";
                cin >> bus;
                cin.ignore();


                Proveedor pro = Proveedor(id, nom, n, dir, tel, bus);
                pro.actualizar();
                
                system("cls");
                cout << "Modificar proveedor (s/n): ";
                cin >> b;
                cin.ignore();

            } while (b == 's' || b == 'S');

        }
        else if (selec == 4) {

            system("cls"); 
            cout << "Imgrese ID De Proveedor Que Desee ELiminar: ";
            cin >> id;
            cin.ignore();

            Proveedor pro = Proveedor(id, nom, n, dir, tel, bus);
            pro.eliminar();
            system("pause");

        }
        
    } while (selec!=0);

}
