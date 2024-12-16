#include<iostream>
using namespace std; 



int main(){
int numero;
int resultado=1; 
cout<<"ingresa el número que quieras que sea factorial:  "<<numero<<std::endl;
cin>>numero;

for (int  i = 1; i <= numero; i++)
{
resultado =resultado*i ;
cout<<i<<"x"<<std::endl;
}
cout<<"el resultado del factorial es :   "<<resultado<<std::endl;


cin.get();


    int numero;
    int x=0,y=1,z=0;
   
cout<<"Humano ingresa un numero para establecer la cantidad de numeros que quieres sumar : "<<std::endl;
cin>>numero;
while(numero ==0){
    cout<<"dijita otro numero, pendejo !!!"<<std::endl;
    cin>>numero;
}
cout<<"1"<<"--";
for(int i = 0 ;i<numero;i++){

   z= x+y; // ahora z va a valer 1 
    cout<<z<<"--";
   x=y; // se cambia a 1 
   y= z;
  
}
    cout<<"\n";
    
}