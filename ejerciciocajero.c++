#include<iostream>
 std::string nombre ;
    std::string contraseña ;
    std::string contraseñanueva ;
     int depositos;
     int monto=3000; 
     int retiros;

     int montoactual = monto-retiros;
void menu(){
        std::cout<<"1. opcion  iniciar secion "<<std::endl;
        std::cout<<"2. realizar un deposito  "<<std::endl; 
        std::cout<<"3.cambiar contraseña "<<std::endl; 
        std::cout<<"4. realizar un retiro "<<std::endl; 
        std::cout<<"5. consultar saldo"<<std::endl; 
        std::cout<<"6. salir"<<std::endl; 

    }
void Iniciarsecion(){
    std::cout<<"humano ingresa tu nombre :  "<<std::endl; 
    std::cin>>nombre;
    std::cout<<"humano ingresa tu contraseña : "<<std::endl; 
    std::cin>>contraseña;
}
void deposito(){
   std::cout<<"humano ingresa el deposito que quieras hacer :  "<<std::endl; 
   // std::cin>>deposito ;
    std::cin>>depositos;
}
void cambiar_contraseña(){
std::cout<<"cambiar contraseña ,escribe la contraseña nueva: "<<std::endl; 
std::cin>>contraseñanueva;
if (contraseñanueva == contraseña)
{
    std::cout<<"la contraseña es la misma ,escribe otra contraseña :   "<<std::endl;
     std::cin>>contraseñanueva;

}else
{
    std::cout<<"genial ,ya se logro el cambio :3"<<std::endl;
}
std::cout<<contraseñanueva;
}
void retiro(){
std::cout<<"humano ingresa el deposito que quieras hacer :  "; 

std::cin>> retiros;

if (retiros>monto)
{
std::cout<<"perate perate ,el retiro es mayor que el monto ,no manches "<<std::endl; 
}else{
    std::cout<<"se realizo el retiro con exito"<<std::endl; 
    std::cout<<"monto actual "<<std::endl;
    std::cout<<montoactual;
}
}
void saldo(){
std::cout<<"visualizar el saldo   "<<std::endl; 
std::cout<<monto;

}
     
    int main (){
    std::string nombre ;
    std::string contraseña ;

  int opcion;



do
{
    /* code */menu();


std::cout << "Ingrese su opción: ";
        std::cin >> opcion;
switch (opcion)
{
case 1:

    Iniciarsecion();
    break;
case 2:
  
    deposito();
    break;
    case 3:
 
    cambiar_contraseña();
    break;
    case 4:
 retiro();
    break;
    case 5:
    saldo();
    break;
   case 6:
     std::cout << "Saliendo del menú." << std::endl;
                break;
default:
std::cout << "Opción no válida. Intenta de nuevo." << std::endl;
    break;
    
}


} while (opcion != 6);

return 0 ;     
}