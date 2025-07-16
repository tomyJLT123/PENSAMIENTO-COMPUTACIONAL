#include <iostream>
using namespace std;
int main() {
    int i,j,n=8;
    
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            if(i%2==1)
            {
                if(j%2==0)            
                {
                    cout<<"N";
                }
                else
                {
                    cout<<"B";
                }
            }
            if(i%2==0)
            {
                if(j%2==1)            
                {
                    cout<<"N";
                }
                else
                {
                    cout<<"B";
                }
            }
        }    
        cout<<endl;
    }

    return 0;
}
