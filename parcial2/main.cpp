#include <iostream>
#include<fstream>

#include "usuarios.h"
#include "bitacora.h"
#include "reportes9959224451.h"
#include "crud9959224451.h"

using namespace std;
void creditosModulo();
void catalogos();
void reportes();
void menuGeneral();
usuarios usuarioRegistrado;
int main()
{
    bool accesoUsuarios;
    //creditosModulo();

    accesoUsuarios==usuarioRegistrado.loginUsuarios();
    if (accesoUsuarios){
        cout<<"Bienvenido";
    }
    system("cls");
    cout<<"** Hasta la proxima **";
    return 0;
}
void menuGeneral(){
    system("cls");
    int choice;
	//char x;
	do
    {
	system("cls");
	cout<<"\t\t\t\t\tUsuario: "<< usuarioRegistrado.getNombre() <<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t |   SISTEMA GESTION DE VENTAS  |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1. Catalogos"<<endl;
	cout<<"\t\t\t 2. Informes"<<endl;
	cout<<"\t\t\t 3. Salir del Sistema"<<endl;
		cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	/*do
    	{*/
    		/*cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');*/
		break;
	case 2:
		//display();
		break;
	case 3:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 3);
}
