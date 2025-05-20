#include<iostream>
#include<string>
using namespace std;
const string Star35 = "***********************************************";
const char Star = '*';   
const string Blank33 = "                                             ";
const string MSG = "!Bienbenido a la programción en c++";
const string Blanks3 = "     ";
const string space =" ";
const string dia1 = "lunes ";
const string hora1 = "9:00 ";
const string hora2 ="11:00 ";
const string hora3 ="2:00 ";
const string materia1 ="computacion ";
const string materia2 = "Física ";
const string materia3 = "Danza ";
const string aula1 = "101 ";
const string aula2 = "201 ";
const string aula3 = "153 ";
int main()
{
    cout<<Star35<<endl <<Star <<Blank33<<Star <<endl;
    cout<<Star<<Blanks3<<MSG<<Blanks3<<Star<<endl;
    cout<<Star<<Blank33<<Star<<endl<< Star35<<endl;
    cout<<endl<<endl;
    cout<<Blanks3 + space + dia1 + hora1 + materia1 + aula1<<endl;
    cout<<Blanks3 + space + dia1 + hora2 + materia2 + aula2<<endl;
    cout<<Blanks3 + space + dia1 + hora3 + materia3 + aula3<<endl;
    return 0;
}