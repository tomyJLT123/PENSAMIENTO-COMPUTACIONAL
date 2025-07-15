#include <iostream>
using namespace std;

int main ()

{
    int n;
    cout<<"Numero de filas: ";
    cin>>n;
    int d1suma=0,d2suma=0,i,j,numeros[n][n];
    
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            cin>>numeros[i][j];
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
          if(i==j)
          d1suma+=numeros[i][j];
          if(i+j==n-1)
          d2suma+=numeros[i][j];
        }
    }
    cout<<"/nLa suma diagonal 1: "<<d1suma;
    cout<<"/nLa suma diagonal 2: "<<d2suma;
        
    return 0;
}
