#include <iostream>
#include <string>
using namespace std;

struct compras {
string codigo;
string producto;
float costo;
};
int main () {
    int i;
    int precio_final = 0;
    compras compras[2];

    for (i=0;i<2;i++)
        {
            cout<<"Ingrese el codigo, producto, costo: "<<endl;
            cin>>compras[i].codigo>>compras[i].producto>>compras[i].costo;
        }
for (i=0;i<3;i++)
    {
        precio_final+=compras[i].costo;
    }

    cout<<precio_final<<endl;
    
}
