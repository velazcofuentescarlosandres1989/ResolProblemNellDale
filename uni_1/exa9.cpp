#include<iostream>
#include<string>
using namespace std;
const string Star35 = "***********************************************";
const char Star = '*';   
const string Blank33 = "                                             ";
const string MSG = "!Bienbenido a la programción en c++";
const string Blanks3 = "        ";
const string space ="      ";
const string nombre = "nombre: carlos,";
const string direccion = " dirección: pachuca,";
const string numero= " numero: 123,";
const string numero_telefono ="telefono: 771 ,";
const string correo= " correo electronico: compa@hotmail.com."; 

int main()
{
    cout<<Star35<<endl <<Star <<Blank33<<Star <<endl;
    cout<<Star<<Blanks3<<MSG<<Blanks3<<Star<<endl;
    cout<<Star<<Blank33<<Star<<endl<< Star35<<endl;
    cout<<endl<<endl;
    string cuatroTexto1;
    cuatroTexto1 = nombre + direccion + numero;
    string cuatroTexto2;
    cuatroTexto2 = numero_telefono + correo;
    //linea 1
    cout<<cuatroTexto1 + Blanks3 + space + cuatroTexto1<<endl;
    cout<<cuatroTexto2 + Blanks3 + cuatroTexto2<<endl<<endl<<endl;
    //linea 2
    cout<<cuatroTexto1 + Blanks3 + space + cuatroTexto1<<endl;
    cout<<cuatroTexto2 + Blanks3 + cuatroTexto2<<endl<<endl<<endl;
    //linea 3
    cout<<cuatroTexto1 + Blanks3 + space + cuatroTexto1<<endl;
    cout<<cuatroTexto2 + Blanks3 + cuatroTexto2<<endl<<endl<<endl;
    //linea 4
    cout<<cuatroTexto1 + Blanks3 + space + cuatroTexto1<<endl;
    cout<<cuatroTexto2 + Blanks3 + cuatroTexto2<<endl<<endl<<endl;
    
    return 0;
}