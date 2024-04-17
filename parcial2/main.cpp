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

    accesoUsuarios=usuarioRegistrado.loginUsuarios();
    if (accesoUsuarios){
        cout<<"Bienvenido";
    }
    system("cls");
    cout<<"** Hasta la proxima **";
    return 0;
}
