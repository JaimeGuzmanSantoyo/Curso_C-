#include<iostream>
#include<math.h>
#include <cstdlib>
#include <ctime>
using namespace std; 



int main(){
  float x,y ,res;
   
    cout<<"ingresa un valor para X :  "<<std::endl;
    cin>>x;
    cout<<"ingresa un valor para y:  "<<std::endl;
    cin>>y;
    float raizx= sqrt(x);
    float ypotencia = y * y ; 
    float yres = ypotencia -1;
    res = raizx / yres ; 


    cout<<"el resultado es : "<<res<<endl;
    







    srand(time(0));       // lo que hace es generar numeros aleatorio ,con time ,lo que hace es generar una aleatoriedad cada vez que se ejecuta el programa
    int aleatorio = rand()%11;     // se ejecutan numeros aleatorios y los valores se dividen entre 11 ,ya que vamos del 0 al 10 
    cout<<"ingresa un valor para X :  "<<std::endl;
    cin>>x;
    if(aleatorio == x){
        cout<<"que hdp , le diste al valor aleatorio "<<aleatorio<<std::endl;
    }else{
        cout<<"todo pendejo ,no le diste,el resultado era:  "<<aleatorio<<std::endl;
    }
 

cin.get();
system("pause");
return 0;     
}

cin.get();
system("pause");
return 0;     
}