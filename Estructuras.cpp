 #include<iostream>
#include<string>
using namespace std;
struct compras {
    int codigo;
    string descripcion;
    float costo;
};
int main()
{
    int Suma=0;
compras compras1[2];
for(int i=0;i<2;i++)
{
cout<<"Datos del articulo "<<i+1<<"\n";
cout<<"Código:\n";
cin>>compras1[i].codigo;
cout<<"Descripcion:\n";
cin>>compras1[i].descripcion;
cout<<"Costo:\n";
cin>>compras1[i].costo;
Suma+=compras1[i].costo;
}
cout<<"---Compras totales---\n";
for(int i=0;i<2;i++)
{
    cout<<"Articulo "<<i+1<<endl;
    cout<<"Código: "<<compras1[i].codigo<<endl;
    cout<<"Descripción: "<<compras1[i].descripcion<<endl;
    cout<<"Precio: $ "<<compras1[i].costo<<endl<<endl;
}
cout<<"Precio total: $ "<<Suma;
return 0;
}