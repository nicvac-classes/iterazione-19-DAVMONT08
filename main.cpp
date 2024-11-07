#include <iostream>
using namespace std;

int main() { 
               int n,d,nd;
               cout<<"inserisci un numero intero"<<endl;
               cin>>n;
               d=1;
               nd=0;
               {
                   while(d<=n)
                   if(n%d=0)
                   {
                    cout<< d << "è divisore"<<endl;
                    nd=nd+1;
                   }
                   d=d+1;

               }
                if(nd=2)
                {
                    cout<< n << "è un numero primo"<<endl;
                }
            else
            {
                cout<< n << " non è un numero primo"<<endl;
            }
        cout<< n << "ha" << nd << "divisori";

   
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
