#include <iostream>
#include <vector>
#include <string>
 std::vector<std::string> notas={};
 int notaaa;
 void Agregarnotas(){
std::cout<<"Humano quieres agregar una nota ? "<<std::endl;
std::cin>>notaaa;
notas.push_back("notaaa");
 };
 void mostrarnotas(){
std::cout<<"mostrar notas : "<<std::endl;

for ( int i = 0; i < notas.size(); i++)
{
std::cout << i << ". " << notas[i] << std::endl;
}

 };
void menu(){
        std::cout<<"1. agregar notas"<<std::endl;
        std::cout<<"2. mostrar notas  "<<std::endl; 
        std::cout<<"3.eliminar notas"<<std::endl; 
     
        std::cout<<"4. salir"<<std::endl; 
};
 void eliminarnotas(){
    int eliminador;
    int longitud = notas.size();
    if (notas.size()== 0)
    {
    std::cout<<"no hay nada que eliminar ,ya que tu arreglo ta vacio  "<<std::endl;
    }else{
    
    std::cout<<"esta es la cantidad de elementos , va del 0 al "<<longitud<<std::endl;
    std::cout<<"escribe el numero que represente a una nota que quieras eliminar ,ejemplo ,1,2,3,etc:  "<<std::endl;
    std::cin>>eliminador;
    notas.erase(notas.begin()+eliminador);
    std::cout<<"se elimino al eñemento  "<<eliminador<<std::endl;
}

 }; 



 int main(){

int opcion;

do

{
   menu();
  std::cout << "Ingrese su opción: ";
        std::cin >> opcion;
  switch (opcion)
  {
  case 1:
     Agregarnotas();
    break;
  case 2 : 
     mostrarnotas();
    break;
    case 3:
    eliminarnotas();
    break;
    case 4:
     std::cout << "Saliendo del menú." << std::endl;
                break; 

  default:
    break;
  } 
} while (opcion!=0);


return 0;

 }