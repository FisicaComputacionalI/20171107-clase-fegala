#include <iostream>
using namespace std;
int main()
{
char variable;
cout<< "Dame un valor entre A, B, C, D, F " <<endl;
cin>>variable;
switch(variable){
 case 'A': cout<<"Excelente"<<endl;
   break;
 case 'B': cout<<"Muy bien"<<endl;
   break;
 case 'C': cout<<"Bien"<<endl;
   break;
 case 'D': cout<<"Pasaste"<<endl;
   break;
 case 'F': cout<<"Intenta de nuevo"<<endl;
   break;
 default: cout<<"Opciòn no vàlida"<<endl;
 }
   return 0;
}
