#include <iostream> 

float valor_1;
float valor_2;



   void menu(){
std::cout<<"CALCULADORA"<<std::endl;
std::cout<<"1. sumar"<<std::endl;
std::cout<<"2. restar"<<std::endl;
std::cout<<"3. multiplicar"<<std::endl;
std::cout<<"4. dividir"<<std::endl;
std::cout<<"5. salir"<<std::endl;
   };
void sumar(){
std::cout<<"Escribe un numero para el valor_1: "<<std::endl;

std::cin>>valor_1;
std::cout<<"Escribe un numero para el valor_2: "<<std::endl;
std::cin>>valor_2;
std::cout<<"El resultado de la suma es : "<<std::endl;
float valor_3 = valor_1+valor_2;
std::cout<<valor_3;
};
void multiplicar(){
std::cout<<"Escribe un numero para el valor_1: "<<std::endl;

std::cin>>valor_1;
std::cout<<"Escribe un numero para el valor_2: "<<std::endl;
std::cin>>valor_2;

float valormultiplicable = valor_1*valor_2;
std::cout<<"El resultado de la multiplicacion  es : "<<std::endl;
std::cout<<valormultiplicable;
};
void resta(){
   std::cout<<"Escribe un numero para el valor_1: "<<std::endl;

std::cin>>valor_1;
std::cout<<"Escribe un numero para el valor_2: "<<std::endl;
std::cin>>valor_2;
float restaa=valor_1-valor_2;
std::cout<<"El resultado de la RESTA es : "<<std::endl;
std::cout<<restaa; 
}
void division(){
std::cout<<"Escribe un numero para el valor_1: "<<std::endl;

std::cin>>valor_1;

std::cout<<"Escribe un numero para el valor_2: "<<std::endl;
std::cin>>valor_2;
if (valor_2 ==0)
{
std::cout<<"Escribe un nuevo valor ppara el valor_2: "<<std::endl;
std::cin>>valor_2;
}else{
    
float valordividido = valor_1/valor_2;
std::cout<<"El resultado de la division  es : "<<std::endl;
std::cout<<valordividido;    
}
}

int main(){
int opciones; 
int numero;
do

{
menu();
std::cout<<"ingresa un numero:  "<<std::endl;
std::cin>>opciones;
switch (opciones)
{
case 1:
sumar();
    break;
case 2:
resta();
    break;
case 3:
multiplicar();
    break;
case 4:
division();
    break;
case 5:
std::cout<<"salir"<<std::endl;
    break;
default:
    break;
}
} while (opciones!=0);


return 0 ;

} 