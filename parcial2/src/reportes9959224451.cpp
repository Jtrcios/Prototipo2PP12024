#include "reportes9959224451.h"
#include "bitacora.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include "usuarios.h"

using namespace std;

void reportes9959224451::menu()
{
int choice;
	char x;

	do
    {
	system("cls");

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t| SISTEMA GESTION DE REPORTES |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingresar Reporte"<<endl;
	cout<<"\t\t\t 2. Mostrar Reportes"<<endl;
	cout<<"\t\t\t 3. Modificar Reportes"<<endl;
	cout<<"\t\t\t 4. Buscar Reportes"<<endl;
	cout<<"\t\t\t 5. Borrar Reporte"<<endl;
	cout<<"\t\t\t 6. Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
    cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	do
    	{
    		insertar();
    		cout<<"\n\t\t\t Agrega otro reporte(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		desplegar();
		break;
	case 3:
		modificar();
		break;
	case 4:
		buscar();
		break;
	case 5:
		borrar();
		break;
	case 6:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
  }while(choice!= 6);
}

void reportes9959224451::insertar()
{
system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Agregar detalles Reporte ---------------------------------------------"<<endl;
	cout<<"\t\t\tIngresar Numero de reporte        : ";
	cin>>id;
	cout<<"\t\t\tIngresa Nombre nombre de usuario    : ";
	cin>>nombre;
	cout<<"\t\t\tIngresa Telefono Vendedor   : ";
	cin>>telefono;

	file.open("reportes.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< telefono << "\n";
	file.close();
	bitacora auditoria;
	auditoria.insertar("usuario registrado", "701", "INS");
}

void reportes9959224451::desplegar()
{
    //ctor
}

void reportes9959224451::modificar()
{
    //ctor
}

void reportes9959224451::buscar()
{
    //ctor
}

void reportes9959224451::borrar()
{
    //ctor
}
