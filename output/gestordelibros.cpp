#include<iostream>
#include <nlohmann/json.hpp>
#include <nlohmann/json.hpp>
using namespace std;
using json = nlohmann::json; // para trabajar con onjetos yeison xd // biblioteca
json BibliotecaDeAlexandria = json::array(); //array tipo yeison
vector<std::string> usuario={};    //array de tipo strings

void agregar  (){
    std::string titulo, autor,fecha_publicacion ;
//json BibliotecaDeAlexandria = json::array();  // arrebglo de tipo jason para mandar a almacenar todos los objetos yeison 
cout<<"humano ingresa el  titulo del libro"<<std::endl;
std::getline(cin ,titulo);
cout<<"humano ingresa el  autor"<<std::endl;
std::getline(cin ,autor);
cout<<"humano ingresa el año de publicación"<<std::endl;
std::getline(cin ,fecha_publicacion);
 json libro{          // creacion del objeto yeison
    "titulo", titulo, // caracteristicas del objeto json 
    "autor", autor,
    "fecha_publicacion", fecha_publicacion ,    //objeto yeison 
 }; 
BibliotecaDeAlexandria.push_back(libro);    // se ingrewsa e  el arreglo de onjetos el libro ingresado por el usuario 
cout<<"porfavor ingrese el usuario que acaba de dodar este libro :  "<<std::endl;
cin>>usuario;
}
void mostrarlibros(){
for ( int  i = 0; i < BibliotecaDeAlexandria.size(); i++)
{
    cout<<BibliotecaDeAlexandria[i]<<std::endl;    // se muestran todos los libros de la biblioteca alexandria
}

}
void mostrarusuarios() {

cout<<"los usuarios que han donado libros son los siguientes :  "<<std::endl;
for (int  j = 0; j < usuario.size(); i++)
{
    cout<<usuario[j]<<std::endl;
}

}

void prestar() {
std::string titulo;
cout<<"ingresa el titulo que quieres que te presete : "<<std::endl;
cin>>titulo;
if (BibliotecaDeAlexandria.size()==0){    // primera comparativa si el arreglo de onjetos esta vacio , se imprime el siguiente mensaje 
cout<<"no hay nada que prestar ,no hay nada almacenado en la bibliteca "<<std::endl;
}else{    // por el contrario si si tiene algo 
    for (int i = 0; i < BibliotecaDeAlexandria.size(); i++)
    {
        if (titulo==BibliotecaDeAlexandria[i]["titulo"])    // se hace una comparativa para localizar el titulo que se desea obtener 
        {   
            cout<<"aqui esta tu chingadera humano pendejo : "<<std:: endl; // si si esta en el arreglo se envia el siguiente mensaje 
            cout<<titulo;
            BibliotecaDeAlexandria.erase(BibliotecaDeAlexandria.begin ()+ i);     //,con erase ,se elimina del arreglo 
             break;
       
        }
        
    }else{
        cout<<"el titulo no  esta"<<std::endl;   // si el titulo no esta
    }
    
}
}
void devolver(){
     std::string titulo, autor,fecha_publicacion ;
     bool devuleto = true;
json BibliotecaDeAlexandria = json::array();
cout<<"humano ingresa el  titulo del libro"<<std::endl;
std::getline(cin ,titulo);
cout<<"humano ingresa el  autor"<<std::endl;
std::getline(cin ,autor);
cout<<"humano ingresa el año de publicación"<<std::endl;
std::getline(cin ,fecha_publicacion);
 json libro2{
    "titulo", titulo,
    "autor", autor,    /// se crea un onjeto llamado libro2 , que nuevamente al ser un objeto yeison .tiene varias caracteristicas 
       "fecha_publicacion", fecha_publicacion,
    "devuelto",devuleto,
 }; 
 BibliotecaDeAlexandria.push_back(libro2); //libro dos se agrega a la biblioteca alexandria donde contiene todos los lbros 
}
void menu(){
    cout<<"1. agregar libros"<<std::endl;
    cout<<"2. mostrar libros"<<std::endl;
    cout<<"3. prestar libros"<<std::endl;     // menu interactivo con el usuario 
    cout<<"4. devolver  libros"<<std::endl;
    cout<<"5. mostrar usuarios"<<std::endl;
    cout<<"6. salir"<<std::endl;
}
using namespace std;
int main(){

int opciones;

    
do
                        //ejecucuion del menu a travez de un swith con un do while 

{
    menu();
switch (opciones)
{
case 1:
    agregar();
    break;

case 2:
     mostrarlibros();
    break;
    case 3:
   prestar();
    break;
    case 4:
    devolver();
    break;
    case 5:
    mostrar();
    break;
    case 6:
    cout<<"saliendp del progrma --------------------------------"<<std::endl;
default:
    break;
}
} while (opciones!=6);




return 0 ;    

}